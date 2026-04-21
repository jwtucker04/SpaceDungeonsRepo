// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Room.h"

#include "RoomGenerator.generated.h"

class ARoom;

UCLASS()
class SPACEDUNGEONS_API ARoomGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoomGenerator();

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<ARoom> RoomClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere, Category = "This Rotation Bullshit")
	//float PitchDelta;

	UPROPERTY(EditAnywhere, Category = "This Rotation Bullshit")
	FRotator ExitRotation;
	
	UPROPERTY(EditAnywhere, Category = "This Rotation Bullshit")
	FRotator EntranceRotation;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TArray<TSubclassOf<ARoom>> SpawnableClasses;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TArray<ARoom*> SpawnedRooms;

	void FindDerivedBlueprints();

	bool bHasBridge;

	ARoom* SpawnRandomClass();

	//UFUNCTION()
	//ARoom* SpawnSpecificRoom(ERoomType RoomType);//ARoom* NewRoom, ARoom* SpawnedRoom, struct FRoomExit Exit, struct FRoomExit* Entrance);

	bool CanSpawnEngineRoom(ARoom* NewRoom, struct FRoomExit Exit, USceneComponent* Entrance, int32 Index);


};


class SpawnTypeClass
{
public :

	SpawnTypeClass(UWorld* world, TArray<TSubclassOf<ARoom>> spawnableClasses);

	bool CanSpawnEngineRoom(ARoom* NewRoom, FRoomExit Exit, USceneComponent* Entrance, int32 Index);

	ARoom* SpawnSpecificRoom(ERoomType RoomType);

	ARoom* SpawnRandomClass();

	AStaticMeshActor* SpawnTunnel(FRoomExit Exit, FVector FromLocation);

protected : 
	UWorld* world;

	TArray<TSubclassOf<ARoom>> SpawnableClasses;


};

class SpawnTypeBranches : public SpawnTypeClass
{
public:
	SpawnTypeBranches(TArray<TSubclassOf<ARoom>> SpawnableClasses, UWorld* World, ARoom* Room, TArray<ARoom*> SpawnedRooms); //: SpawnTypeClass(World, SpawnableClasses);
    
};

class SpawnTypeCA : public SpawnTypeClass
{
public:
	SpawnTypeCA(TArray<TSubclassOf<ARoom>> SpawnableClasses, UWorld* World); //: SpawnTypeClass(World, SpawnableClasses);

	int CountNeighbours(int x, int y, const TArray<TArray<int>>& grid);

	void SimulateStep(TArray<TArray<int>>& Grid);

	std::tuple<FRoomExit, FRoomExit> FindClosestEntrance(ARoom* NewRoom, FVector Location);

	ARoom* FindClosestRoom(TArray<ARoom*> Rooms, ARoom* CurrentRoom);

	int grid_width = 10;
	int grid_height = 10;

	TArray<TArray<int32>> Grid;
	
};