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

// Sets default values
ARoomGenerator::ARoomGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARoomGenerator::BeginPlay()
{
	Super::BeginPlay();

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    FVector SpawnLocation = FVector(0, 0, 0); // adjust as needed
    FRotator SpawnRotation = FRotator(0, 0, 0);

    //ARoom* SpawnedRoom = GetWorld()->SpawnActor<ARoom>(RoomClass, SpawnLocation, SpawnRotation, SpawnParams);

    FindDerivedBlueprints();
    ARoom* SpawnedRoom = SpawnRandomClass();
    ARoom* NewSpawnedRoom;

    for (int j = 0; j < 3; j++)
    {
        UE_LOG(LogTemp, Warning, TEXT("New Branch"))
        for (int i = 0; i < 3; i++)
        {
            if (SpawnedRoom)
            {

                SpawnedRoom->CollectExits();
                TArray<FRoomExit>& Exits = SpawnedRoom->ExitData;

                while (Exits.Num() > 0)
                {
                    int32 ExitIndex = FMath::RandRange(0, Exits.Num() - 1);

                    const FRoomExit& Exit = Exits[ExitIndex];

                    Exit.ExitComponent->SetHiddenInGame(false);

                    NewSpawnedRoom = SpawnRandomClass();
                    
                    //NewSpawnedRoom = GetWorld()->SpawnActor<ARoom>(RoomClass, SpawnLocation, SpawnRotation, SpawnParams);
                    NewSpawnedRoom->CollectExits();

                    int32 EntranceIndex = FMath::RandRange(0, NewSpawnedRoom->ExitData.Num() - 1);
                    FRoomExit* Entrance = &NewSpawnedRoom->ExitData[EntranceIndex];
                    FVector FromLocation = FVector(0,0,0);

                    int32 EngineCheckIterator = 100;

                    Entrance->ExitComponent->SetHiddenInGame(false);

                    // 2. Get info from the previous room's exit and the new room's entrance
                    FromLocation = Exit.ExitComponent->GetComponentLocation();

                    ExitRotation = Exit.ExitComponent->GetComponentRotation();
                    EntranceRotation = Entrance->ExitComponent->GetComponentRotation();

                    float PitchDelta = FMath::FindDeltaAngleDegrees(
                        Exit.ExitComponent->GetForwardVector().Rotation().Pitch,
                        Entrance->ExitComponent->GetForwardVector().Rotation().Pitch);

                    NewSpawnedRoom->AddActorLocalRotation(FRotator(PitchDelta, 0, 0));


                    FVector ExitDir = Exit.ExitComponent->GetForwardVector().GetSafeNormal();
                    FVector EntranceDir = Entrance->ExitComponent->GetForwardVector().GetSafeNormal();


                    if (FVector::DotProduct(ExitDir, EntranceDir) > 0.99f)
                    {
                        NewSpawnedRoom->AddActorLocalRotation(FRotator(180.f, 0.f, 0.f));
                    }

                    if (SpawnEngineRoom(NewSpawnedRoom, Exit, Entrance, EntranceIndex) == false)
                    {
                        continue;
                    }

                    FVector ToLocation = Entrance->ExitComponent->GetComponentLocation();

                    FVector NewOffset = FromLocation - ToLocation;
                    NewSpawnedRoom->AddActorWorldOffset(NewOffset);
                    NewSpawnedRoom->AddActorWorldOffset(Exit.Direction * 1100);

                    

                    TArray<FOverlapResult> Overlaps;
                    FCollisionQueryParams QueryParams;
                    QueryParams.AddIgnoredActor(NewSpawnedRoom);
                    
                    bool bOverlapping = GetWorld()->OverlapMultiByChannel(
                        Overlaps,
                        NewSpawnedRoom->BoxComp->GetComponentLocation(),
                        FQuat::Identity,
                        ECC_WorldDynamic,
                        FCollisionShape::MakeBox(NewSpawnedRoom->BoxComp->GetScaledBoxExtent()),
                        QueryParams
                    );
                    
                    
                    if (bOverlapping)
                    {
                        Exits.RemoveAt(ExitIndex);
                        NewSpawnedRoom->Destroy();
                    }
                    else
                    {
                        UE_LOG(LogTemp, Warning, TEXT("New Room"))


                        FActorSpawnParameters TunnelParams;
                        TunnelParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

                        FRotator TunnelRotation = FRotator(0, 0, 180);

                        // Spawn a basic StaticMeshActor
                        AStaticMeshActor* Tunnel = nullptr;
                            
                        Tunnel = GetWorld()->SpawnActor<AStaticMeshActor>(FromLocation, TunnelRotation, TunnelParams);

                        if (Tunnel)
                        {
                            
                            // Load the mesh at runtime (replace with your mesh path!)
                            UStaticMesh* Mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), nullptr, TEXT("/Game/My_Stuff/Rooms/SpaceShipRoomsPass1_Tunnel.SpaceShipRoomsPass1_Tunnel")));
                            if (Mesh)
                            {
                                Tunnel->GetStaticMeshComponent()->SetStaticMesh(Mesh);
                                Tunnel->GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable); // Optional

                                Tunnel->AddActorLocalRotation(FRotator(Exit.Direction.Rotation().Pitch, 0, 0));

                                if (Exit.Direction.Equals(Tunnel->GetActorForwardVector(), 1.f))
                                {
                                    UE_LOG(LogTemp, Warning, TEXT("EQUAL"))

                                    Tunnel->AddActorLocalRotation(FRotator(180, 0, 0));
                                }

                                Tunnel->SetActorScale3D(FVector(2.3f)); 
                            }
                        }

                        SpawnedRooms.Add(NewSpawnedRoom);

                        SpawnedRoom = NewSpawnedRoom;
                        break;
                    }

                }

            }
        }

        int RandRoom = FMath::RandRange(0, SpawnedRooms.Num()-1);

        //NewSpawnedRoom = SpawnRandomClass();
        
        if (SpawnedRooms.Num() > 0)
        {
            SpawnedRoom = SpawnedRooms[RandRoom];
        }


    }

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    int32 RandSpawnRoom = FMath::RandRange(0, SpawnedRooms.Num() - 1);

    PlayerPawn->SetActorLocation(SpawnedRooms[RandSpawnRoom]->GetActorLocation());
	
    

}

bool ARoomGenerator::SpawnEngineRoom(ARoom* NewRoom, FRoomExit Exit, FRoomExit* Entrance, int32 Index)
{
    while (NewRoom->bIsEngine == true && !NewRoom->GetActorRotation().Equals(FRotator(0, 0, 0), 0.01f))
    {
        UE_LOG(LogTemp, Warning, TEXT("DESTROY!!"))
        if (NewRoom->ExitData.Num() > 0)
        {
            NewRoom->ExitData.RemoveAt(Index);
            Index = FMath::RandRange(0, NewRoom->ExitData.Num() - 1);

            float PitchDelta = FMath::FindDeltaAngleDegrees(
                Exit.ExitComponent->GetForwardVector().Rotation().Pitch,
                Entrance->ExitComponent->GetForwardVector().Rotation().Pitch);

            NewRoom->AddActorLocalRotation(FRotator(PitchDelta, 0, 0));

            if (IsValid(Entrance->ExitComponent))
            {
                FVector ExitDir = Exit.ExitComponent->GetForwardVector().GetSafeNormal();
                FVector EntranceDir = Entrance->ExitComponent->GetForwardVector().GetSafeNormal();

                if (FVector::DotProduct(ExitDir, EntranceDir) > 0.99f)
                {
                    NewRoom->AddActorLocalRotation(FRotator(180.f, 0.f, 0.f));
                }
            }
            continue;
        }
        else
        {
            NewRoom->Destroy();
            return false;
            break;
        }
    }
    return true;
}

// Called every frame
void ARoomGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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

ARoom* ARoomGenerator::SpawnRandomClass()
{
    if (SpawnableClasses.Num() > 0)
    {
        int32 Index = FMath::RandRange(0, SpawnableClasses.Num() - 1);
        TSubclassOf<ARoom> ClassToSpawn = SpawnableClasses[Index];

        if (ClassToSpawn)
        {
            FActorSpawnParameters SpawnParams;
            FVector Location = FVector(0); // Or any location
            FRotator Rotation = FRotator(0);

            return GetWorld()->SpawnActor<ARoom>(ClassToSpawn, Location, Rotation, SpawnParams);
        }
    }

    return nullptr;
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
