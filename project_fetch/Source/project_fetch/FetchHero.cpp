// Fill out your copyright notice in the Description page of Project Settings.


#include "FetchHero.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "project_controller.h"
#include "fetch_state.h"
#include "PlayerAttributeSet.h"
#include "FetchAbilitySystemComponent.h"
AFetchHero::AFetchHero()
{

	SpringArm =CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetCapsuleComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	SpringArm->TargetArmLength = 500.f;
	SpringArm->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));

}

void AFetchHero::BeginPlay()
{
	Super::BeginPlay();
}

void AFetchHero::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitAbilitySystem();
}

void AFetchHero::InitAbilitySystem()
{
	Super::InitAbilitySystem();

	if (Afetch_state* player_state = Cast<Afetch_state>(GetPlayerState())) {

		AbilitySystemComponent = Cast<UFetchAbilitySystemComponent>(player_state->GetAbilitySystemComponent());
		AbilitySystemComponent->InitAbilityActorInfo(player_state, this);

		AttributeSet = player_state->GetAttributeSet();
	}
}
