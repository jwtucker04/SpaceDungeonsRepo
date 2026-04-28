// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Room.h"

#include "RoomGenerator.generated.h"


UENUM(BlueprintType)
enum class EGenType : uint8
{
	EGT_Branches UMETA(DisplayName = "Branches"),

	EGT_CA UMETA(DisplayName = "Cellular_Automata")

};

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
	UPROPERTY(EditAnywhere, Category = "Spawning")

	UStaticMesh* TunnelMesh;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	EGenType GenType;

	UPROPERTY(EditAnywhere, Category = "BranchesSettings")
	int NumberOfBranches;

	UPROPERTY(EditAnywhere, Category = "BranchesSettings")
	int BranchLength;

	UPROPERTY(EditAnywhere, Category = "CASettings")
	int GridSizeX;

	UPROPERTY(EditAnywhere, Category = "CASettings")
	int GridSizeY;

	UPROPERTY(EditAnywhere, Category = "CASettings")
	int NumberOfSteps;

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

	SpawnTypeClass(UWorld* world, TArray<TSubclassOf<ARoom>> spawnableClasses, UStaticMesh* TunnelMesh);

	bool CanSpawnEngineRoom(ARoom* NewRoom, FRoomExit Exit, USceneComponent* Entrance, int32 Index);

	ARoom* SpawnSpecificRoom(ERoomType RoomType);

	ARoom* SpawnRandomClass();

	UStaticMesh* TunnelMesh;

	AStaticMeshActor* SpawnTunnel(FRoomExit Exit, FVector FromLocation);

	FQuat MatchRotation(ARoom* NewRoom, FRoomExit Exit, FRoomExit Entrance);


protected : 
	UWorld* world;

	TArray<TSubclassOf<ARoom>> SpawnableClasses;

};

class SpawnTypeBranches : public SpawnTypeClass
{
public:
	SpawnTypeBranches(TArray<TSubclassOf<ARoom>> SpawnableClasses, UWorld* World, ARoom* Room, TArray<ARoom*> SpawnedRooms, UStaticMesh* TunnelMesh, int Lenght, int BLength); //: SpawnTypeClass(World, SpawnableClasses);
    
};

class SpawnTypeCA : public SpawnTypeClass
{
public:
	SpawnTypeCA(TArray<TSubclassOf<ARoom>> SpawnableClasses, UWorld* World, UStaticMesh* TunnelMesh, int gridx, int gridy, int min); //: SpawnTypeClass(World, SpawnableClasses);

	int CountNeighbours(int x, int y, const TArray<TArray<int>>& grid);

	void SimulateStep(TArray<TArray<int>>& Grid);

	std::tuple<FRoomExit, FRoomExit> FindClosestEntrance(ARoom* NewRoom, FVector Location);

	ARoom* FindClosestRoom(TArray<ARoom*> Rooms, ARoom* CurrentRoom);

	int grid_width;
	int grid_height;

	int Steps;

	TArray<TArray<int32>> Grid;
	
};