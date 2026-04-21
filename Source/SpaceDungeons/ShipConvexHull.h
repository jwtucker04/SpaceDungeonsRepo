// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShipConvexHull.generated.h"

UCLASS()
class SPACEDUNGEONS_API AShipConvexHull : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShipConvexHull();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class UProceduralMeshComponent* ProceduralMesh;

	UPROPERTY(EditAnywhere, Category = "Geometry", Meta = (MakeEditWidget = true))
	TArray<FVector> HoleVertexList;

	UPROPERTY(EditAnywhere, Category = "Geometry", Meta = (MakeEditWidget = true))
	TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere)
	TArray<int> Triangles;

	void CreateConvexHull(TArray<class ARoom*> SpawnedRooms);

	bool SmallerAngle(FVector Currentpoint, FVector PreviousPoint, FVector EndPoint);

	void CreateHolesInHull(TArray<ARoom*> SpawnedRooms);

};
