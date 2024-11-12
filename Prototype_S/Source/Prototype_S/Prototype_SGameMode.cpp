// Copyright Epic Games, Inc. All Rights Reserved.

#include "Prototype_SGameMode.h"
#include "Prototype_SCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrototype_SGameMode::APrototype_SGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
