// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceDungeonsGameMode.h"
#include "SpaceDungeonsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpaceDungeonsGameMode::ASpaceDungeonsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
