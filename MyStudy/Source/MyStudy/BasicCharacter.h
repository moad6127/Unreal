// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasicCharacter.generated.h"

UCLASS()
class MYSTUDY_API ABasicCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABasicCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AttackMelee();
	void AttackMeleeEnd();

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* AttackCombo_AnimMT;

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* LastAttack_Anims;


	bool IsDuringAttack;


	int ComboAttackNum;
};
