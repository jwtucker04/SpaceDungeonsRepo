// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlaceholderAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SPACEDUNGEONS_API UPlaceholderAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;

	UFUNCTION(BlueprintCallable)
		void UpdateAnimationProperties();

	UPROPERTY(EditAnywhere, BlueprintreadOnly)
		float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintreadOnly)
		class APawn* Pawn;

	UPROPERTY(EditAnywhere, BlueprintreadOnly)
		class ASpaceDungeonsCharacter* Main;

	UPROPERTY(EditAnywhere, BlueprintreadOnly)
		bool bFloating;
};
