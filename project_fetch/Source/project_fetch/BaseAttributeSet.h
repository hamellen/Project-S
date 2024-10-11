// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "BaseAttributeSet.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName,PropertyName)			\
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName,PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName)			\
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName)			\
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)			

/**
 * 
 */
UCLASS()
class PROJECT_FETCH_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UBaseAttributeSet();

public:
	ATTRIBUTE_ACCESSORS(ThisClass, Health);
	ATTRIBUTE_ACCESSORS(ThisClass, HealthMax);
	ATTRIBUTE_ACCESSORS(ThisClass, Damage);
	ATTRIBUTE_ACCESSORS(ThisClass, Defence);


private:
	UPROPERTY(EditAnywhere,meta=(AllowPrivateAccess="true"))
	FGameplayAttributeData Health;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	FGameplayAttributeData HealthMax;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	FGameplayAttributeData Damage;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	FGameplayAttributeData Defence;
};
