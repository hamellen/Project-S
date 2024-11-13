// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "S_PlayerState.generated.h"

class US_PlayerAttributeSet;

UCLASS()
class PROJECT_S_API AS_PlayerState : public APlayerState,public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:

	AS_PlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	US_PlayerAttributeSet* GetPlayerAttributeSet();

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class US_AbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<US_PlayerAttributeSet> PlayerAttributeSet;

};
