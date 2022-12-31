// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicCharacter.h"

// Sets default values
ABasicCharacter::ABasicCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ComboAttackNum = 0;
}

// Called when the game starts or when spawned
void ABasicCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABasicCharacter::AttackMelee()
{
	if (ComboAttackNum < 3)
	{
		int temp_Num = rand() % 3 + 1;

		FString PlaySection = "Attack_" + FString::FromInt(temp_Num);

		PlayAnimMontage(AttackCombo_AnimMT, 1.0f, FName(*PlaySection));
		ComboAttackNum++;
		IsDuringAttack = true;
	}
	else
	{
		PlayAnimMontage(LastAttack_Anims, 1.0f);
		ComboAttackNum = 0;
	}
	

	FTimerHandle TH_Attack_end;
	GetWorldTimerManager().SetTimer(TH_Attack_end, this,
		&ABasicCharacter::AttackMeleeEnd, 1.7f, false);
}

void ABasicCharacter::AttackMeleeEnd()
{
	IsDuringAttack = false;
}

