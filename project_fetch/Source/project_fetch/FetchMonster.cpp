// Fill out your copyright notice in the Description page of Project Settings.


#include "FetchMonster.h"
#include "FetchAbilitySystemComponent.h"
#include "Components/WidgetComponent.h"
#include "MonsterAttributeSet.h"
AFetchMonster::AFetchMonster():Super()
{
	
	AbilitySystemComponent = CreateDefaultSubobject<UFetchAbilitySystemComponent>(TEXT("AbilitySystem"));
	AttributeSet= CreateDefaultSubobject<UMonsterAttributeSet>(TEXT("MonsterAttributeSet"));
}

void AFetchMonster::BeginPlay()
{
	Super::BeginPlay();

	InitAbilitySystem();
}



void AFetchMonster::InitAbilitySystem()
{
	Super::InitAbilitySystem();

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}
