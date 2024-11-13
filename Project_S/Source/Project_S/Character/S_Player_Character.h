// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/S_BaseCharacter.h"
#include "S_Player_Character.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_S_API AS_Player_Character : public AS_BaseCharacter
{
	GENERATED_BODY()
	
public:

	AS_Player_Character();

	virtual void PossessedBy(AController* NewController) override;
	virtual void InitAbilitySystem();
};
