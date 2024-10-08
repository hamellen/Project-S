// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "Project_Asset_Manager.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_FETCH_API UProject_Asset_Manager : public UAssetManager
{
	GENERATED_BODY()
public:
	UProject_Asset_Manager();

	static UProject_Asset_Manager& Get();



};
