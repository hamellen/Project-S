// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "fetch_base_character.h"
#include "FetchMonster.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_FETCH_API AFetchMonster : public Afetch_base_character
{
	GENERATED_BODY()
	
public:
	AFetchMonster();

	virtual void BeginPlay() override;

	virtual void InitAbilitySystem();
public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TObjectPtr<class UWidgetComponent> HpBarComponent;
};
