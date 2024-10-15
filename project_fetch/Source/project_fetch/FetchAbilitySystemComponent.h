// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "FetchAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_FETCH_API UFetchAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:

	void AddCharacterAbilities(const TArray<TSubclassOf<class UGameplayAbility>>&  Abilities);

};
