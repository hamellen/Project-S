// Fill out your copyright notice in the Description page of Project Settings.


#include "S_Enemy_Character.h"
#include "ASC/S_AbilitySystemComponent.h"
#include "ASC/S_EnemyAttributeSet.h"
AS_Enemy_Character::AS_Enemy_Character()
{
	AbilitySystemComponent = CreateDefaultSubobject<US_AbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AttributeSet = CreateDefaultSubobject<US_EnemyAttributeSet>(TEXT("EnemyAttributeSet"));
}

void AS_Enemy_Character::InitAbilitySystem()
{
	Super::InitAbilitySystem();

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

void AS_Enemy_Character::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);


	InitAbilitySystem();
}
