// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pre_Struct.generated.h"


USTRUCT(Atomic,BlueprintType)
struct FItemInfo {

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	int32 value;//해당 효과의 수치 

	UPROPERTY(EditAnywhere)
	EItemCategory category;//아이템 종류 
};

UENUM()
enum class EItemCategory : uint8//아이템의 종류 기술
{
	Heal UMETA(DisplayName = "HEALTH"),//체력
	Attack UMETA(DisplayName = "ATTACK"),//공격력
	Move UMETA(DisplayName = "MOVE"),//이동속도 

};