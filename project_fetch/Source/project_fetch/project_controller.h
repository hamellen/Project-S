// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "project_controller.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_FETCH_API Aproject_controller : public APlayerController
{
	GENERATED_BODY()
public:

	Aproject_controller(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;

};
