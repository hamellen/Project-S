// Fill out your copyright notice in the Description page of Project Settings.


#include "S_PlayerState.h"
#include "ASC/S_AbilitySystemComponent.h"


AS_PlayerState::AS_PlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<US_AbilitySystemComponent>(TEXT("AbilitySystemComponent"));

}

UAbilitySystemComponent* AS_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
