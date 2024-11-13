// Fill out your copyright notice in the Description page of Project Settings.


#include "S_Player_Character.h"
#include "ASC/S_AbilitySystemComponent.h"
#include "PlayerState//S_PlayerState.h"

AS_Player_Character::AS_Player_Character()
{


}

void AS_Player_Character::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);


	InitAbilitySystem();
}

void AS_Player_Character::InitAbilitySystem()
{
	Super::InitAbilitySystem();

	if (AS_PlayerState* PS = GetPlayerState<AS_PlayerState>()) {

		AbilitySystemComponent = Cast<US_AbilitySystemComponent>(PS->GetAbilitySystemComponent());
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);
	}

}
