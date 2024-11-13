// Fill out your copyright notice in the Description page of Project Settings.


#include "ASC/S_AbilitySystemComponent.h"
#include "S_BaseCharacter.h"


// Sets default values
AS_BaseCharacter::AS_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.f, 0.f, -88.f), FRotator(0.f, -90.f, 0.f));
}

// Called when the game starts or when spawned
void AS_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AS_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AS_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* AS_BaseCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AS_BaseCharacter::InitAbilitySystem()
{

}

