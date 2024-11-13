// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "S_PlayerState.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_S_API AS_PlayerState : public APlayerState,public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:

	AS_PlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class US_AbilitySystemComponent> AbilitySystemComponent;

};
