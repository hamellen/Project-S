// Fill out your copyright notice in the Description page of Project Settings.


#include "S_PlayerState.h"
#include "ASC/S_AbilitySystemComponent.h"
#include "ASC/S_PlayerAttributeSet.h"

AS_PlayerState::AS_PlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<US_AbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	PlayerAttributeSet = CreateDefaultSubobject<US_PlayerAttributeSet>(TEXT("PlayerAttributeSet"));
}

UAbilitySystemComponent* AS_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

US_PlayerAttributeSet* AS_PlayerState::GetPlayerAttributeSet()
{
	return PlayerAttributeSet;
}
