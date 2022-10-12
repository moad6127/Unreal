// Copyright Epic Games, Inc. All Rights Reserved.

#include "GunsGameMode.h"
#include "GunsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGunsGameMode::AGunsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
