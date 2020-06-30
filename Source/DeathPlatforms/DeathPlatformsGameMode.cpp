// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeathPlatformsGameMode.h"
#include "DeathPlatformsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADeathPlatformsGameMode::ADeathPlatformsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
