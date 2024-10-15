// Fill out your copyright notice in the Description page of Project Settings.


#include "FetchAbilitySystemComponent.h"

void UFetchAbilitySystemComponent::AddCharacterAbilities(const TArray<TSubclassOf<class UGameplayAbility>>& Abilities)
{
	for (auto& AbilityClass : Abilities) 
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, 1);

		FGameplayAbilitySpecHandle SpecHandle=GiveAbility(AbilitySpec);//스킬배움

		//TryActivateAbility(SpecHandle);//스킬사용
	}
}
