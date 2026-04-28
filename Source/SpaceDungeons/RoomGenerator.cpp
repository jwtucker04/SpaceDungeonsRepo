// Fill out your copyright notice in the Description page of Project Settings.

#include "RoomGenerator.h"
#include "Engine/EngineTypes.h"
#include "Room.h"
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/ArrowComponent.h"
#include "Engine/Blueprint.h"
#include "Kismet/KismetSystemLibrary.h" 
#include "Engine/StaticMeshActor.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "CollisionQueryParams.h"
#include "CollisionShape.h" 
#include "Engine/World.h"
#include "Engine/HitResult.h"
#include "Engine/OverlapResult.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "ShipConvexHull.h"


// Sets default values
ARoomGenerator::ARoomGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    bHasBridge = false;

}

void ARoomGenerator::FindDerivedBlueprints()
{
    SpawnableClasses.Empty();

    TArray<AActor*> FoundRooms;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARoom::StaticClass(), FoundRooms);

    TSet<TSubclassOf<ARoom>> UniqueSet;

    for (AActor* Actor : FoundRooms)
    {
        if (ARoom* Room = Cast<ARoom>(Actor))
        {
            TSubclassOf<ARoom> FoundRoomClass = Room->GetClass();

            if (FoundRoomClass)
            {
                UniqueSet.Add(FoundRoomClass);
            }
        }
    }

    SpawnableClasses = UniqueSet.Array();

}

// Called when the game starts or when spawned
void ARoomGenerator::BeginPlay()
{
	Super::BeginPlay();

	FindDerivedBlueprints();


    if (GenType == EGenType::EGT_Branches)
    {
        SpawnTypeBranches NewBranches(SpawnableClasses, GetWorld(), nullptr, SpawnedRooms, TunnelMesh, NumberOfBranches, BranchLength);
    }
		
    if (GenType == EGenType::EGT_CA)
    {
		SpawnTypeCA NewCase(SpawnableClasses, GetWorld(), TunnelMesh, GridSizeX, GridSizeY, NumberOfSteps);

    }

    

}

// Called every frame
void ARoomGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ARoom* SpawnTypeClass::SpawnRandomClass()
{
    if (SpawnableClasses.Num() > 0)
    {
        int32 Index = FMath::RandRange(0, SpawnableClasses.Num() - 1);
        TSubclassOf<ARoom> ClassToSpawn = SpawnableClasses[Index];

        if (ClassToSpawn)
        {
            FActorSpawnParameters SpawnParams;
            FVector Location = FVector(0); 
            FRotator Rotation = FRotator(0);

            return world->SpawnActor<ARoom>(ClassToSpawn, Location, Rotation, SpawnParams);
        }
    }

    return nullptr;
}

bool SpawnTypeClass::CanSpawnEngineRoom(ARoom* NewRoom, FRoomExit Exit, USceneComponent* Entrance, int32 Index)
{
    for (int i = 0; i < NewRoom->ExitData.Num(); i++)
    {
        ARoom* TestRoom = SpawnSpecificRoom(ERoomType::EMS_Engine);

        TArray<FRoomExit> ExitDataCopy = TestRoom->ExitData;

        USceneComponent* NewEntrance = ExitDataCopy[i].ExitComponent;

        //TestRoom->SetActorRotation(FRotator::ZeroRotator);

        float PitchDelta = FMath::FindDeltaAngleDegrees(
            Exit.ExitComponent->GetForwardVector().Rotation().Pitch,
            NewEntrance->GetForwardVector().Rotation().Pitch
        );

        TestRoom->AddActorLocalRotation(FRotator(PitchDelta, 0, 0));

        FVector ExitDir = Exit.ExitComponent->GetForwardVector().GetSafeNormal();
        FVector EntranceDir = NewEntrance->GetForwardVector().GetSafeNormal();

        if (FVector::DotProduct(ExitDir, EntranceDir) > 0.99f)
        {
            TestRoom->AddActorLocalRotation(FRotator(180.f, 0.f, 0.f));
        }

        FVector ToLocation = NewEntrance->GetComponentLocation();

        FVector FromLocation = Exit.ExitComponent->GetComponentLocation();

        FVector NewOffset = FromLocation - ToLocation;
        TestRoom->AddActorWorldOffset(NewOffset);
        TestRoom->AddActorWorldOffset(Exit.ExitComponent->GetForwardVector() * 1100);

        // Check if final rotation is valid
        if (TestRoom->GetActorRotation().Equals(FRotator::ZeroRotator, 0.1f))
        {
            NewRoom->SetActorRotation(TestRoom->GetActorRotation());
            Entrance = NewEntrance;
            NewRoom->SetActorLocation(TestRoom->GetActorLocation());
            TestRoom->Destroy();
            return true; // success
        }
        TestRoom->Destroy();


    }

    // No exit worked
    NewRoom->Destroy();
    return false;
}

SpawnTypeClass::SpawnTypeClass(UWorld* World, TArray<TSubclassOf<ARoom>> spawnableClasses, UStaticMesh* _TunnelMesh)
{
	world = World;
    SpawnableClasses = spawnableClasses;

	TunnelMesh = _TunnelMesh;
}

FQuat SpawnTypeClass::MatchRotation(ARoom* CurrentRoom, FRoomExit Exit, FRoomExit Entrance)
{
    FVector ExitDir = Exit.ExitComponent->GetForwardVector().GetSafeNormal();
    FVector EntranceDir = Entrance.ExitComponent->GetForwardVector().GetSafeNormal();

    FQuat Rot = FQuat::FindBetweenNormals(EntranceDir, -ExitDir);

    FRotator Rotator = Rot.Rotator();

    FVector Up = FVector::RightVector;
    FVector NewUp = Rot.RotateVector(CurrentRoom->GetActorRightVector());

    FQuat Correction = FQuat::FindBetweenNormals(NewUp, Up);

	FQuat FinalRot = Correction * Rot;

	return FinalRot;
}

AStaticMeshActor* SpawnTypeClass::SpawnTunnel(FRoomExit Exit, FVector FromLocation)
{
    FActorSpawnParameters TunnelParams;
    TunnelParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    UStaticMesh* Mesh = TunnelMesh;//Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), nullptr, TEXT("/Game/My_Stuff/Rooms/SpaceShipRoomsPass1_Tunnel.SpaceShipRoomsPass1_Tunnel")));
    if (Mesh)
    {

        //Tunnel->AddActorLocalRotation(FRotator(Exit.ExitComponent->GetForwardVector().Rotation().Pitch, 0, 0));
        //

        //if (Exit.ExitComponent->GetForwardVector().Equals(Tunnel->GetActorForwardVector(), 0.5f))
        //{

        //    Tunnel->AddActorLocalRotation(FRotator(180, 0, 0));
        //}

        FVector Forward = -Exit.ExitComponent->GetForwardVector().GetSafeNormal();

        // Build full rotation from direction
        FRotator TunnelRotation = Forward.Rotation();

        AStaticMeshActor* Tunnel = world->SpawnActor<AStaticMeshActor>(
            FromLocation,
            TunnelRotation,
            TunnelParams
        );

        Tunnel->GetStaticMeshComponent()->SetStaticMesh(Mesh);
        Tunnel->GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
        Tunnel->SetActorScale3D(FVector(2.3f));
        return Tunnel;
    }
    
    return nullptr;
}
SpawnTypeBranches::SpawnTypeBranches(TArray<TSubclassOf<ARoom>> SpawnableClasses, UWorld* _World, ARoom* spawnedRoom, TArray<ARoom*> SpawnedRooms, UStaticMesh* TunnelMesh, int Length, int bLength) : SpawnTypeClass(_World, SpawnableClasses, TunnelMesh)
{

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    FVector SpawnLocation = FVector(0, 0, 0); // adjust as needed
    FRotator SpawnRotation = FRotator(0, 0, 0);
 
    ARoom* SpawnedRoom = SpawnRandomClass();
    ARoom* NewSpawnedRoom;

    for (int j = 0; j < bLength; j++)
    {
        for (int i = 0; i < Length; i++)
        {
            if (SpawnedRoom)
            {

                SpawnedRoom->CollectExits();
                TArray<FRoomExit> Exits = SpawnedRoom->ExitData;

                TArray<ARoom*> FinalSpawnedRooms = SpawnedRooms;

                while (Exits.Num() > 0)
                {

                    int32 ExitIndex = FMath::RandRange(0, Exits.Num() - 1);

                    const FRoomExit Exit = Exits[ExitIndex];

                    Exit.ExitComponent->SetHiddenInGame(false);

                    //if (i >= 2 && j >= 2)
                    //{
                    //    NewSpawnedRoom = SpawnSpecificRoom(ERoomType::EMS_Engine);
                    //}
                    //else
                    {
                        NewSpawnedRoom = SpawnRandomClass();
                    }


                    NewSpawnedRoom->CollectExits();

                    int32 EntranceIndex = FMath::RandRange(0, NewSpawnedRoom->ExitData.Num() - 1);
                    FRoomExit* Entrance = &NewSpawnedRoom->ExitData[EntranceIndex];

                    int32 EngineCheckIterator = 100;

                    Entrance->ExitComponent->SetHiddenInGame(false);

                    FVector FromLocation = Exit.ExitComponent->GetComponentLocation();

					FQuat RoomRot = MatchRotation(SpawnedRoom, Exit, *Entrance);

                    NewSpawnedRoom->AddActorLocalRotation(RoomRot);

                    FVector ExitDir = Exit.ExitComponent->GetForwardVector().GetSafeNormal();
                    FVector EntranceDir = Entrance->ExitComponent->GetForwardVector().GetSafeNormal();

                    if (FVector::DotProduct(ExitDir, EntranceDir) > 0.99f)
                    {
                        NewSpawnedRoom->AddActorLocalRotation(FRotator(180.f, 0.f, 0.f));
                    }

                    //if (j > 1)
                    //{
                    //    UE_LOG(LogTemp, Warning, TEXT("SPAWNFINALENGINES"))
                    //}
                    //else
                    //{
                    //    if (NewSpawnedRoom->RoomType == ERoomType::EMS_Engine)
                    //    {
                    //        NewSpawnedRoom->Destroy();
                    //        continue;
                    //    }
                    //}

                    //if (NewSpawnedRoom->RoomType == ERoomType::EMS_Engine && CanSpawnEngineRoom(NewSpawnedRoom, Exit, Entrance->ExitComponent, EntranceIndex) == false)
                    //{
                    //    if (i == 2 && j == 2)
                    //    {
                    //        Exits.RemoveAt(ExitIndex);

                    //    }
                    //    continue;
                    //}

                    //if (NewSpawnedRoom->RoomType == ERoomType::EMS_Bridge)
                    //{
                    //    NewSpawnedRoom->Destroy();
                    //    continue;
                    //}

                    FVector ToLocation = Entrance->ExitComponent->GetComponentLocation();

                    FVector NewOffset = FromLocation - ToLocation;

                    //if (NewSpawnedRoom->RoomType != ERoomType::EMS_Engine)
                    //{
                    NewSpawnedRoom->AddActorWorldOffset(NewOffset);
                    NewSpawnedRoom->AddActorWorldOffset(Exit.ExitComponent->GetForwardVector() * 1100);
                    //}



                    TArray<FOverlapResult> Overlaps;
                    FCollisionQueryParams QueryParams;
                    QueryParams.AddIgnoredActor(NewSpawnedRoom);


                    bool bOverlapping = world->OverlapMultiByChannel(
                        Overlaps,
                        NewSpawnedRoom->BoxComp->GetComponentLocation(),
                        NewSpawnedRoom->GetActorQuat(),
                        ECC_WorldDynamic,
                        FCollisionShape::MakeBox(NewSpawnedRoom->BoxComp->GetScaledBoxExtent()),
                        QueryParams
                    );


                    if (bOverlapping)
                    {
                        Exits.RemoveAt(ExitIndex);

                        NewSpawnedRoom->Destroy();

                        if (Exits.Num() < 1)
                        {
                            int RandRoom = FMath::RandRange(0, SpawnedRooms.Num() - 1);

                            if (SpawnedRooms.Num() > 0)
                            {
                                SpawnedRoom = SpawnedRooms[RandRoom];
                                Exits = SpawnedRoom->ExitData;
                            }
                            continue;
                        }
                    }
                    else
                    {

						SpawnTunnel(Exit, FromLocation);

                        SpawnedRooms.Add(NewSpawnedRoom);

                        SpawnedRoom = NewSpawnedRoom;
                        break;
                    }

                }

            }
        }

        int RandRoom = FMath::RandRange(0, SpawnedRooms.Num() - 1);


        if (SpawnedRooms.Num() > 0)
        {
            SpawnedRoom = SpawnedRooms[RandRoom];
        }


    }

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(world, 0);

    int32 RandSpawnRoom = FMath::RandRange(0, SpawnedRooms.Num() - 1);

    if (SpawnedRooms.Num() > 0)
    {
        PlayerPawn->SetActorLocation(SpawnedRooms[RandSpawnRoom]->GetActorLocation());
    }

    AActor* FoundShipHull = UGameplayStatics::GetActorOfClass(world, AShipConvexHull::StaticClass());

    if (FoundShipHull)
    {
        AShipConvexHull* ShipConvexHull = Cast<AShipConvexHull>(FoundShipHull);
      //  ShipConvexHull->CreateConvexHull(SpawnedRooms);
    }
}

ARoom* SpawnTypeClass::SpawnSpecificRoom(ERoomType RoomType)
{
    ARoom* Room = SpawnRandomClass();
    while (Room->RoomType != RoomType)
    {
        Room->Destroy();

        Room = SpawnRandomClass();
    }

    return Room;
}

SpawnTypeCA::SpawnTypeCA(TArray<TSubclassOf<ARoom>> SpawnableClasses, UWorld* World, UStaticMesh* TunnelMesh, int gridx, int gridy, int min) : SpawnTypeClass(World, SpawnableClasses, TunnelMesh)
{
    grid_width = gridx;
    grid_height = gridy;

    Steps = min;

    Grid.SetNum(gridy);

	TArray<ARoom*> CARooms;

    for (int y = 0; y < gridy; y++)
    {
        Grid[y].SetNum(gridx);

        for (int x = 0; x < gridx; x++)
        {
            Grid[y][x] = FMath::FRand() < 0.45f ? 1 : 0;
        }
    }

    for (int step = 0; step < Steps; step++)
    {
        SimulateStep(Grid);
    }

    for (int y = 0; y < gridy; y++)
    {
        for (int x = 0; x < gridx; x++)
        {
            if (Grid[y][x] == 1)
            {
                ARoom* Newroom = SpawnRandomClass(); 
                //ARoom* Newroom = SpawnSpecificRoom(ERoomType::EMS_Normal);
                FVector NewLocation = FVector(0);// Newroom->GetActorLocation() - Newroom->Mesh->GetComponentLocation();
                Newroom->SetActorLocation(FVector(x * 4000+NewLocation.X, 0, y * 4000+NewLocation.Z));
				int RandRot = FMath::RandRange(0, 3);
                Newroom->AddActorLocalRotation(FRotator(RandRot*90, 0, 0));

				CARooms.Add(Newroom);
            }
        }
    }

	ARoom* CurrentRoom;
    ARoom* PrevRoom;

	TArray<ARoom*> ProcessedRooms;

    if (CARooms.Num() < 1)
    {
        return;
	}
    ProcessedRooms.Add(CARooms[0]);
	CARooms.RemoveAt(0);

    for (ARoom* Room : CARooms)
    {
        Room->CollectExits();
	}
    for (int k = 0; k < 5; k++)
    {
        for (int i = 0; i < CARooms.Num(); i++)//(ARoom* Room : CARooms)
        {
            CurrentRoom = CARooms[i];

            TArray<ARoom*> StoredRooms;

            for (int j = 0; j < 4; j++)
            {
                if (ProcessedRooms.Num() == 0)
                {
                    break;
                }
                PrevRoom = FindClosestRoom(ProcessedRooms, CurrentRoom);

				CurrentRoom->CollectExits();

				int randEntranceIndex = FMath::RandRange(0, CurrentRoom->ExitData.Num() - 1);

                FRoomExit Entrance = CurrentRoom->ExitData[randEntranceIndex];

                FRoomExit Exit = std::get<0>(FindClosestEntrance(PrevRoom, CurrentRoom->GetActorLocation()));

                Entrance.ExitComponent->SetHiddenInGame(false);
                //FVector ExitDir = Exit.ExitComponent->GetForwardVector().GetSafeNormal();
                //FVector EntranceDir = Entrance.ExitComponent->GetForwardVector().GetSafeNormal();

                //FQuat Rot = FQuat::FindBetweenNormals(EntranceDir, -ExitDir);

                //FRotator Rotator = Rot.Rotator();

                //FVector Up = FVector::RightVector;
                //FVector NewUp = Rot.RotateVector(CurrentRoom->GetActorRightVector());

                //FQuat Correction = FQuat::FindBetweenNormals(NewUp, Up);

				FQuat MatchRot = MatchRotation(CurrentRoom, Exit, Entrance);

                CurrentRoom->AddActorLocalRotation(MatchRot);

                //if (FVector::CrossProduct(ExitDir, EntranceDir).IsNearlyZero())
                {
                    FVector EntranceWorldPos = Entrance.ExitComponent->GetComponentLocation();
                    FVector ExitWorldPos = Exit.ExitComponent->GetComponentLocation();

                    FVector Delta = ExitWorldPos - EntranceWorldPos;

                    //CurrentRoom->AddActorWorldOffset(Delta);

                    //CurrentRoom->AddActorWorldOffset(Exit.ExitComponent->GetForwardVector() * 1300);

                    TArray<FOverlapResult> Overlaps;
                    FCollisionQueryParams QueryParams;
                    QueryParams.AddIgnoredActor(CurrentRoom);

                    for (ARoom* Room : CARooms)
                    {
                        QueryParams.AddIgnoredActor(Room);
					}

                    bool bOverlapping = world->OverlapMultiByChannel(
                        Overlaps,
                        CurrentRoom->BoxComp->GetComponentLocation(),
                        CurrentRoom->GetActorQuat(),
                        ECC_WorldDynamic,
                        FCollisionShape::MakeBox(CurrentRoom->BoxComp->GetScaledBoxExtent()),
                        QueryParams
                    );

                    CurrentRoom->ExitData.RemoveAll(
                        [&](const FRoomExit& E)
                        {
                            UE_LOG(LogTemp, Error, TEXT("Removingexit"));

                            return E.ExitComponent == Entrance.ExitComponent;
                        }
                    );

                    PrevRoom->ExitData.RemoveAll(
                        [&](const FRoomExit& E)
                        {
                            return E.ExitComponent == Exit.ExitComponent;
                        }
                    );

                    if (bOverlapping)
                    {
                        StoredRooms.Add(PrevRoom);
                        ProcessedRooms.Remove(PrevRoom);
                        continue;
                    }

                    AStaticMeshActor* NewTunnel = SpawnTunnel(Exit, Exit.ExitComponent->GetComponentLocation());

					CARooms.Remove(CurrentRoom);
                    ProcessedRooms.Add(CurrentRoom);

                    break;
                }

                StoredRooms.Add(PrevRoom);
                ProcessedRooms.Remove(PrevRoom);

            }

            for (ARoom* Room : StoredRooms)
            {
                ProcessedRooms.Add(Room);
            }

        }
    }

    for (int i = 0; i < CARooms.Num(); i++)//(ARoom* Room : CARooms)
    {
       // CARooms[i]->Destroy();
    }


} //after first roundof processed rooms, go through with carooms again and see if they can be stuck to anything

std::tuple<FRoomExit, FRoomExit>  SpawnTypeCA::FindClosestEntrance(ARoom* NewRoom, FVector Location)
{
    //NewRoom->CollectExits();
    //OldRoom->CollectExits();
    TArray<FRoomExit> NewExits = NewRoom->ExitData;
    //TArray<FRoomExit> OldExits = OldRoom->ExitData;
    FRoomExit ClosestNewExit;
    FRoomExit ClosestOldExit;
    float ClosestDistance = TNumericLimits<float>::Max();

    for (FRoomExit NewExit : NewExits)
    {
       // for (FRoomExit OldExit : OldExits)
        {
            float Distance = FVector::Dist(NewExit.ExitComponent->GetComponentLocation(), Location);
            if (Distance < ClosestDistance)
            {
                ClosestDistance = Distance;
                ClosestNewExit = NewExit;
               // ClosestOldExit = OldExit;
            }
        }
    }

	return std::make_tuple(ClosestNewExit, ClosestOldExit);

}

ARoom* SpawnTypeCA::FindClosestRoom(TArray<ARoom*> CARooms, ARoom* CurrentRoom)
{
    ARoom* ClosestRoom = CARooms[0];
    float ClosestDist = TNumericLimits<float>::Max();
    for (ARoom* Room : CARooms)
    {
        float Distance = FVector::Dist(Room->GetActorLocation(), CurrentRoom->GetActorLocation());

        if (Room == CurrentRoom)
        {
            continue;
        }
        if (Distance < ClosestDist)
        {
            ClosestDist = Distance;
            ClosestRoom = Room;
        }

    }

    return ClosestRoom;
}

int SpawnTypeCA::CountNeighbours(int x, int y, const TArray<TArray<int>>& grid)
{

	int count = 0;

    for (int ny = -1; ny <= 1; ny++)
    {
        for (int nx = -1; nx <= 1; nx++)
        {
            if (nx == 0 && ny == 0)
            {
                continue; // Skip the center cell
            }
            int checkX = x + nx;
            int checkY = y + ny;
            // Check if the neighboring cell is within bounds
            if (checkX >= 0 && checkX < grid_width && checkY >= 0 && checkY < grid_height)
            {
                count += Grid[checkY][checkX];
            }
            else
            {
                count += 1;

            }
        }
	}

    return count;

}



void SpawnTypeCA::SimulateStep(TArray<TArray<int>>& _grid)
{

    TArray<TArray<int>> NewGrid = _grid;

    for (int x= 0; x< grid_height; x++)
    {
        for (int y = 0; y<grid_width; y++)
        {
            int neighbours = CountNeighbours(x, y, _grid);
            if (neighbours >= 4)
            {
                NewGrid[x][y] = 0;
            }
            else
            {
                NewGrid[x][y] = 1;
            }
        }
    }

	_grid = NewGrid;
}

//                  ((`\                      ___    
//              ___  \\ '--._      ___,.----'`   ', /__,-
//          .'`     `'    0  )    <___            |< \_
//         /    \     '. __.'         `'----.,___-  \  ',
//        _|    /_    \ \_\_                         '
//      { _\______\ - '\__\_\      bnnuy

 
//
//                                               
//           _____    ___.---_                   ' ` _            
//        .'`   ,  ``   /      '-           _  \      '           <---- coriander leaf
//       /  /  /     /       0    `.       /    - _____,- .__   
//       |   /   /  -  /           |       \ _ .       '   
//       \   .  __  '         __`.'             <     -
//        '-___   ` - - ,___ `       pigy        `- '
//
