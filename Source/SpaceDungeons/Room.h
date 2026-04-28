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

UENUM(BlueprintType)
enum class ERoomType : uint8
{
	EMS_Normal UMETA(DisplayName = "Normal"),

	EMS_Bridge UMETA(DisplayName = "Bridge"),
	EMS_Engine UMETA(DisplayName = "Engine")

};

UCLASS()
class SPACEDUNGEONS_API ARoom : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoom();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enums")
	ERoomType RoomType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Stats")
	TArray<USceneComponent*> Exits;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FRoomExit> ExitData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bOverlapped;

	void CollectExits();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsEngine;

	bool bIsBridge;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
