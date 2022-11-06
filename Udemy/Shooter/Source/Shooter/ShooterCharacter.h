// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

UCLASS()
class SHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// �հ� �ڷ� �����϶� �ʿ��� �Լ�
	void MoveForward(float Value);

	//�¿�� �����̱�
	void MoveRight(float Value);

	//�־��� �ӵ��� ȸ���ϴ� �Լ�
	//����ȭ�� ���� �� 1�� 100%�� ȸ��
	void TurnAtRate(float Rate);


	//���Ʒ��� �������ؼ� ���� �Լ�
	//����ȭ�Ǽ�1�� 100%�̴�

	void LookUpAtRate(float Rate);

	//�߻� ��ư ������
	void FireWeapon();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	/* Camera boom positioning the behind the character*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/*ĳ���͸� ����ٴϴ� ī�޶�*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	// �⺻ ȸ���� 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float BaseTurnRate;

	//
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float BaseLookUpRate;

	//�ѼҸ� ť
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class USoundCue* FireSound;
	
	//�� �� ������ ȭ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UParticleSystem* MuzzleFlash;

	//���� �߻� �ִϸ��̼� ��Ÿ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* HipFireMontage;
public:
	/*return CameraBoom subobject*/
	FORCEINLINE USpringArmComponent* GetCarmeraBoom() const { return CameraBoom; }

	/*ī�޶� ��ȯ, ī�޶� ����*/
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
