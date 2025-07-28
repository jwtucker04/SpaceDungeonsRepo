// Fill out your copyright notice in the Description page of Project Settings.


#include "Room.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "AssetRegistryModule.h"


// Sets default values
ARoom::ARoom()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	RootComponent = BoxComp;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	bOverlapped = false;
}


// Called when the game starts or when spawned
void ARoom::BeginPlay()
{
	Super::BeginPlay();

	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &ARoom::OnOverlapBegin);

	CollectExits();
	
}

// Called every frame
void ARoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARoom::CollectExits()
{
	Exits.Empty();

	if (!Mesh) return;

	const TArray<USceneComponent*>& MeshChildren = Mesh->GetAttachChildren();

	for (USceneComponent* Child : MeshChildren)
	{
		if (IsValid(Child))
		{
			Exits.Add(Child);
		}
	}

	ExitData.Empty();

	for (int32 i = 0; i < Exits.Num(); ++i)
	{
		FRoomExit ExitInfo;

		ExitInfo.ExitComponent = Exits[i];
		ExitInfo.Index = i;

		if (IsValid(ExitInfo.ExitComponent))
		{
			ExitInfo.Direction = ExitInfo.ExitComponent->GetForwardVector();
		}

		ExitData.Add(ExitInfo);
	}
}

void ARoom::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA<ARoom>())
	{
		bOverlapped = true;
	}
}
