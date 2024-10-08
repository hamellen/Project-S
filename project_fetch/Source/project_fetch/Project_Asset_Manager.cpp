// Fill out your copyright notice in the Description page of Project Settings.


#include "Project_Asset_Manager.h"

UProject_Asset_Manager::UProject_Asset_Manager():Super()
{
}

UProject_Asset_Manager& UProject_Asset_Manager::Get()
{

	if (UProject_Asset_Manager* Singleton = Cast<UProject_Asset_Manager>(GEngine->AssetManager)) {

		return *Singleton;
	}

	return *NewObject<UProject_Asset_Manager>();
}
