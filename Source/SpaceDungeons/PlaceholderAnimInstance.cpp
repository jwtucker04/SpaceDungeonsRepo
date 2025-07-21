// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaceholderAnimInstance.h"
#include "SpaceDungeonsCharacter.h"

void UPlaceholderAnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			Main = Cast<ASpaceDungeonsCharacter>(Pawn);
		}
	}

}

void UPlaceholderAnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();

	}

	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		MovementSpeed = Speed.Size();

		if (Main == nullptr)
		{
			Main = Cast<ASpaceDungeonsCharacter>(Pawn);

			
		}

		if (Main->MovementStatus == EMovementStatus::EMS_Floating)
		{
			bFloating = true;
		}
		else
		{
			bFloating = false;
		}

	}
}

