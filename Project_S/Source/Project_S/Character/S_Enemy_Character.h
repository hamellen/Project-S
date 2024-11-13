// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/S_BaseCharacter.h"
#include "S_Enemy_Character.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_S_API AS_Enemy_Character : public AS_BaseCharacter
{
	GENERATED_BODY()
	
public:

	AS_Enemy_Character();


	virtual void InitAbilitySystem();
};
