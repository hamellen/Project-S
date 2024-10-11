// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "fetch_base_character.h"
#include "FetchHero.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_FETCH_API AFetchHero : public Afetch_base_character
{
	GENERATED_BODY()
	
public:
	AFetchHero();

	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void InitAbilitySystem() override;//어빌리티시스템 초기화

protected:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	TObjectPtr<class USpringArmComponent> SpringArm;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<class UCameraComponent> Camera;
};
