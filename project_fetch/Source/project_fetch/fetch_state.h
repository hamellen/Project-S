// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "BaseAttributeSet.h"
#include "fetch_state.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_FETCH_API Afetch_state : public APlayerState,public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:

	Afetch_state(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	virtual UBaseAttributeSet* GetAttributeSet() const;
protected:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	TObjectPtr<class UFetchAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<class UBaseAttributeSet> AttributeSet;
};
