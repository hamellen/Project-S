// Fill out your copyright notice in the Description page of Project Settings.


#include "fetch_state.h"
#include "FetchAbilitySystemComponent.h"
#include "PlayerAttributeSet.h"


Afetch_state::Afetch_state(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	AbilitySystemComponent = CreateDefaultSubobject<UFetchAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AttributeSet= CreateDefaultSubobject<UPlayerAttributeSet>(TEXT("PlayerAttributeSet"));
}

UAbilitySystemComponent* Afetch_state::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UPlayerAttributeSet* Afetch_state::GetAttributeSet() const
{
	return AttributeSet;
}
