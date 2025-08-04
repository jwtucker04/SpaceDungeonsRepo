// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceDungeonsCharacter.h"
//#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"


//////////////////////////////////////////////////////////////////////////
// ASpaceDungeonsCharacter

ASpaceDungeonsCharacter::ASpaceDungeonsCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(540.0f, 0.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	WallDistance = 0;
//	DesiredMeshRot = FRotator(0, 0, 0);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input



void ASpaceDungeonsCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASpaceDungeonsCharacter::Boost);
//	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASpaceDungeonsCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASpaceDungeonsCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
//	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ASpaceDungeonsCharacter::TurnAtRate);

}

void ASpaceDungeonsCharacter::Tick(float DeltaTime)
{
	//SetActorLocation(FVector(0, GetActorLocation().Y, GetActorLocation().Z));

	FHitResult OutHit;
	FCollisionQueryParams CollisionParams;

	DrawDebugLine(GetWorld(), GetActorLocation(), (-(RootComponent->GetUpVector()) * 150 + RootComponent->GetComponentLocation()), FColor::Green, false, 0.1, 0, 1);

	GetWorld()->LineTraceSingleByChannel(OutHit, GetActorLocation(), (-(RootComponent->GetUpVector()) * 150 + RootComponent->GetComponentLocation()), ECC_Visibility, CollisionParams);

	if (OutHit.bBlockingHit)
	{

		if (!bMidJump)
		{
			float Alignment = FVector::DotProduct(OutHit.Normal, GetActorUpVector());

			if (Alignment < 0.99f) // Not fully aligned
			{
				// 3. Nudge the actor forward
				float PushDistance = 0.5f; // Tweak this value

				float Dir;

				if (DesiredYaw == 180.f)
				{
					Dir = -1;
				}
				else if (DesiredYaw == 0.f)
				{
					Dir = 1;
				}
				
				
				//FVector ForwardPush = FVector(0, Dir*PushDistance, 0)* PushDistance;

				MoveRight(Dir*PushDistance); // Sweep for safety
			}

			SetActorRotation(FMath::RInterpTo(GetActorRotation(), FRotationMatrix::MakeFromXZ(GetActorForwardVector(), OutHit.Normal).Rotator(), DeltaTime, 10.f));


			MovementStatus = (EMovementStatus::EMS_OnWall);
		}

	}
	else
	{
		MovementStatus = (EMovementStatus::EMS_Floating);
	}

	if ((MovementStatus == EMovementStatus::EMS_OnWall))
	{
		//if (OutHit.GetActor()) in case of crashes
		//{
		FVector ImpactPoint = OutHit.ImpactPoint;
		WallDistance = FVector::Dist(GetActorLocation(), ImpactPoint);

		if (WallDistance >= 100)
		{
			UE_LOG(LogTemp, Warning, TEXT("Grav"))
			AddMovementInput(GetActorUpVector(), -1);

		}
		//}

		GetCharacterMovement()->BrakingDecelerationFlying = 15000.f;
		GetCharacterMovement()->MaxAcceleration = 15000.f;
		GetCharacterMovement()->MaxFlySpeed = 1000.f;

		bStuck = true;

	}

	if ((MovementStatus == EMovementStatus::EMS_Floating))
	{

		GetCharacterMovement()->BrakingDecelerationFlying = 0.f;
		GetCharacterMovement()->MaxAcceleration = 2000.f;
		GetCharacterMovement()->MaxFlySpeed = 300;

		bStuck = false;

	}
	if (1==0)//OutHit.GetActor())
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.0f,
			FColor::Yellow,
			FString::Printf(TEXT("Hit: %s"), *OutHit.GetActor()->GetName())
		);
	}

}

void ASpaceDungeonsCharacter::Boost()
{
	if (MovementStatus == EMovementStatus::EMS_OnWall)
	{
		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (!PC) return;

		bMidJump = true;

		GetWorld()->GetTimerManager().SetTimer(DetectTimer, this, &ASpaceDungeonsCharacter::SetFlag, 0.2f, false);

		FVector WorldLocation, WorldDirection;
		if (PC->DeprojectMousePositionToWorld(WorldLocation, WorldDirection))
		{

			MovementStatus = EMovementStatus::EMS_Floating;

			GetCharacterMovement()->BrakingDecelerationFlying = 0.f;

			// Side scroller: Intersect with a plane at the character's Y location
			float PlaneX = GetActorLocation().Y;

			// Solve for t in: RayOrigin + t * RayDir = Point on Plane (Y = PlaneY)
			float t = (PlaneX - WorldLocation.Y) / WorldDirection.Y;
			FVector MouseWorldPos = WorldLocation + t * WorldDirection;

			// Calculate direction from character to mouse position
			FVector Direction = (MouseWorldPos - GetActorLocation());
			Direction.Y = 0; // Ignore Y to constrain to XZ
			Direction.Normalize();

			UE_LOG(LogTemp, Warning, TEXT("Jump"))

			GetCharacterMovement()->AddImpulse(Direction * 1000.0f, true);
		}
	}


}

void ASpaceDungeonsCharacter::SetFlag()
{
	bMidJump = false;
}


void ASpaceDungeonsCharacter::TurnAtRate(float Rate)
{
	if (MovementStatus == EMovementStatus::EMS_Floating)
	{
		// calculate delta for this frame from the rate information
		float DeltaTime = GetWorld()->GetDeltaSeconds();
		float RollAmount = -Rate * 100 * DeltaTime;

		AddActorLocalRotation(FRotator(0.f, 0.f, RollAmount));
	}
	
}


void ASpaceDungeonsCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f) && (MovementStatus == EMovementStatus::EMS_Floating))
	{
		// find out which way is forward
		const FRotator Rotation = GetActorRotation();

		// get forward vector
		const FVector Direction = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Z);
		AddMovementInput(Direction, Value);
	}
}

void ASpaceDungeonsCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		float InputSign = FMath::Sign(Value);

		DesiredYaw = (InputSign >= 0.f) ? 0.f : 180.f;

		FRotator DesiredMeshRot = FRotator(0, DesiredYaw, 0); // Just yaw

		// smooth interpolation
		FRotator CurrentRot = GetMesh()->GetRelativeRotation();
		FRotator SmoothedRot = FMath::RInterpTo(CurrentRot, DesiredMeshRot, GetWorld()->GetDeltaSeconds(), 10.f);

		GetMesh()->SetRelativeRotation(SmoothedRot);

		const FRotator Rotation = GetActorRotation();

		FVector Direction = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);

	}
}
