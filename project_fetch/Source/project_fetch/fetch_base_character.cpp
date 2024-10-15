// Fill out your copyright notice in the Description page of Project Settings.


#include "fetch_base_character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Abilities//GameplayAbility.h"
#include "FetchAbilitySystemComponent.h"

// Sets default values
Afetch_base_character::Afetch_base_character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationRoll = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.f, 0.f, -88.f), FRotator(0.f, -90.f, 0.f));
}

// Called when the game starts or when spawned
void Afetch_base_character::BeginPlay()
{
	Super::BeginPlay();
	
	AddCharacterAbilities();

}

float Afetch_base_character::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{


	return 0.0f;
}

// Called every frame
void Afetch_base_character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Afetch_base_character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* Afetch_base_character::GetAbilitySystemComponent() const
{

	return AbilitySystemComponent;
}

void Afetch_base_character::InitAbilitySystem()
{


}

void Afetch_base_character::AddCharacterAbilities()
{
	if (AbilitySystemComponent == nullptr) {
		return;
	}


}

