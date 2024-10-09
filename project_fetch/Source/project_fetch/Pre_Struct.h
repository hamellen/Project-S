// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pre_Struct.generated.h"


USTRUCT(Atomic,BlueprintType)
struct FItemInfo {

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	int32 value;//�ش� ȿ���� ��ġ 

	UPROPERTY(EditAnywhere)
	EItemCategory category;//������ ���� 
};

UENUM()
enum class EItemCategory : uint8//�������� ���� ���
{
	Heal UMETA(DisplayName = "HEALTH"),//ü��
	Attack UMETA(DisplayName = "ATTACK"),//���ݷ�
	Move UMETA(DisplayName = "MOVE"),//�̵��ӵ� 

};