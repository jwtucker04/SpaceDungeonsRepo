// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Room.generated.h"

USTRUCT(BlueprintType)
struct FRoomExit
{
	GENERATED_BODY()

public:

	UPROPERTY()
	class USceneComponent* ExitComponent;

	UPROPERTY()
	FVector Direction;

	UPROPERTY()
	int32 Index;
};

UCLASS()
class SPACEDUNGEONS_API ARoom : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoom();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UArrowComponent* ExitT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UArrowComponent* ExitB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UArrowComponent* ExitL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UArrowComponent* ExitR;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Stats")
	TArray<USceneComponent*> Exits;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FRoomExit> ExitData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bOverlapped;

	void CollectExits();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
