// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "S_AttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName,PropertyName)	\
		GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName,PropertyName) \
		GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName)				\
		GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName)				\
		GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)				\

/**
 * 
 */
UCLASS()
class PROJECT_S_API US_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	US_AttributeSet();

public:

	ATTRIBUTE_ACCESSORS(ThisClass, Health);
	ATTRIBUTE_ACCESSORS(ThisClass, MaxHealth);
	ATTRIBUTE_ACCESSORS(ThisClass, BaseDamage);
	ATTRIBUTE_ACCESSORS(ThisClass, BaseDefense);

private:

	UPROPERTY(BlueprintReadOnly,meta=(AllowPrivateAccess="true"))
	FGameplayAttributeData Health;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FGameplayAttributeData MaxHealth;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FGameplayAttributeData BaseDamage;
	
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FGameplayAttributeData BaseDefense;
};
