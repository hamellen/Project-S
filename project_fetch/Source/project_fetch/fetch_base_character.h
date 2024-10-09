// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "fetch_base_character.generated.h"

UCLASS()
class PROJECT_FETCH_API Afetch_base_character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Afetch_base_character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	int32 hp;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
