// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipConvexHull.h"
#include "ProceduralMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Room.h"
#include "Algo/Unique.h"

// Sets default values
AShipConvexHull::AShipConvexHull()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Proceduralmesh"));
	ProceduralMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AShipConvexHull::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void AShipConvexHull::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AShipConvexHull::CreateHolesInHull(TArray<ARoom*> SpawnedRooms)
{
	HoleVertexList.Empty();

	for (ARoom* Room : SpawnedRooms)
	{
		FHitResult Outhit;

		FVector CastLocation = Room->GetActorLocation() + FVector(2000, 0, 0);

		GetWorld()->LineTraceSingleByChannel(Outhit, CastLocation, Room->GetActorLocation(), ECollisionChannel::ECC_Visibility);

		if (Outhit.GetActor() == Room)
		{
			HoleVertexList.Add(Outhit.Location);

			float Radius = 2000.0f; 
			
			float X = FMath::Cos(10.f) * Radius;
			float Z = FMath::Sin(10.f) * Radius;

			FVector Offset = FVector(X, 0, Z);

			CastLocation += Offset;

			GetWorld()->LineTraceSingleByChannel(Outhit, CastLocation, Room->GetActorLocation(), ECollisionChannel::ECC_Visibility);
			DrawDebugLine(GetWorld(), CastLocation, Room->GetActorLocation(), FColor::Red, false, 1.0f, 0, 2.0f);

		}
	}
}


void AShipConvexHull::CreateConvexHull(TArray<ARoom*> SpawnedRooms)
{
	TArray<FVector> ExitLocs;

	TArray<FVector> VertexLocs;

	for (ARoom* Room : SpawnedRooms)
	{
		for (FRoomExit Exit : Room->ExitData)
		{
			ExitLocs.Add(Exit.ExitComponent->GetComponentLocation());
		}

	}


	TArray<FVector> HullLocations;

	FVector PointOnHull = ExitLocs[0];

	for (const FVector P : ExitLocs)
	{
		if (P.X < PointOnHull.X)
		{
			PointOnHull = P;
		}
	}

	FVector StartPoint = PointOnHull;
	FVector Endpoint = FVector(0, 0, 0);

	int i = 0;

	do
	{
		HullLocations.Add(PointOnHull);
		Endpoint = ExitLocs[0];
		for (FVector Vertex : ExitLocs)
		{
			if (Endpoint == PointOnHull || SmallerAngle(Vertex, HullLocations[i], Endpoint))
			{
				Endpoint = Vertex;
			}
		}
		PointOnHull = Endpoint;

		i++;

	} while ((!Endpoint.Equals(HullLocations[0], 1e-4)));
	 
	Vertices.Empty();
	for (FVector HullLoc : HullLocations)
	{
		Vertices.Add(ProceduralMesh->GetComponentTransform().InverseTransformPosition(HullLoc));
	}

	// Fan triangulation
	Triangles.Empty();
	for (int32 j = 1; j < HullLocations.Num() - 1; j++)
	{
		Triangles.Add(0);        
		Triangles.Add(j);        
		Triangles.Add(j + 1);    
	}

	ProceduralMesh->CreateMeshSection(0, Vertices, Triangles, TArray<FVector>(), TArray<FVector2d>(), TArray<FColor>(), TArray<FProcMeshTangent>(), false);
	ProceduralMesh->AddRelativeLocation(FVector(0, -500, 0));

	CreateHolesInHull(SpawnedRooms);

}

bool AShipConvexHull::SmallerAngle(FVector Current, FVector Previous, FVector Endpoint)
{
	FVector PQ = FVector(Current - Previous);
	FVector PR = FVector(Endpoint - Previous);

	float Cross = PQ.X * PR.Z - PQ.Z * PR.X;

	if (Cross > 0)
	{
		return true; 
	}
	else if (FMath::IsNearlyZero(Cross))
	{
			// if collinear, keep the further one
		return (Current - Previous).SizeSquared() > (Endpoint - Previous).SizeSquared();
	}

	return false;
}
