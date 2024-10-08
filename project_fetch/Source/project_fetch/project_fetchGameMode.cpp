// Copyright Epic Games, Inc. All Rights Reserved.

#include "project_fetchGameMode.h"
#include "project_fetchCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aproject_fetchGameMode::Aproject_fetchGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
