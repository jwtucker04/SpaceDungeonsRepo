// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoomGenerator.generated.h"

UCLASS()
class SPACEDUNGEONS_API ARoomGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoomGenerator();

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class ARoom> RoomClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "This Rotation Bullshit")
	float PitchDelta;

	UPROPERTY(EditAnywhere, Category = "This Rotation Bullshit")
	FRotator ExitRotation;
	
	UPROPERTY(EditAnywhere, Category = "This Rotation Bullshit")
	FRotator EntranceRotation;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TArray<TSubclassOf<class ARoom>> SpawnableClasses;

	void FindDerivedBlueprints();

	class ARoom* SpawnRandomClass();



};
