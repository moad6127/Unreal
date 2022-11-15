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

	//���콺 �����ӿ� ���� ȸ��
	void Turn(float Value);

	//���콺 �����ӿ� ���ؼ� ȸ��
	void LookUp(float Value);

	//�߻� ��ư ������
	void FireWeapon();

	bool GetBeamEndLocation(const FVector& MuzzleSocketLocation, FVector& OutBeamLocation);

	//���� ��ư���������� ������ �Լ���
	void AimingButtonPressed();
	void AimingButtonReleased();

	void CameraInterpZoom(float DeltaTime);


	//�������� �����ϴ� ���
	void SetLookRates();

	void CalculateCrosshairSpread(float DeltaTime);

	void StartCrosshairBulletFire();

	UFUNCTION()
	void FinishCrosshairBulletFire();

	void FireButtonPressed();
	void FireButtonReleased();

	void StartFireTimer();

	UFUNCTION()
	void AutoFireReset();

	//ũ�ν� ��� �ٷ� �Ʒ� �����ϱ�
	bool TraceUnderCrosshair(FHitResult& OutHitResult);
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


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float BaseLookUpRate;

	//�������� ������ ȸ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float HipTurnRate;

	//��������������
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float HipLookUpRate;

	//�����Ҷ�
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float AimingTurnRate;

	//�����Ҷ�
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float AimingLookUpRate;

	//�������� ������ ���콺�� ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseHipTurnRate;

	//�������� ������ ���콺�� ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"),meta =(ClampMin = "0.0", ClampMax = "1.0",UIMin = "0.0", UIMax = "1.0"))
	float MouseHipLookUpRate;

	//�����Ҷ� ���콺�� ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseAimingTurnRate;

	//�����Ҷ� ���콺�� ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseAimingLookUpRate;

	//�ѼҸ� ť
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class USoundCue* FireSound;
	
	//�� �� ������ ȭ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UParticleSystem* MuzzleFlash;

	//���� �߻� �ִϸ��̼� ��Ÿ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* HipFireMontage;

	//�Ѿ� �浹�� �����Ǵ� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* ImpactParticles;

	//�Ѿ��� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* BeamParticles;

	//���ӹ�ư�� �����°�?
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	bool bAiming;

	//�⺻ ī�޶� �þ߰�
	float CameraDefaultFOV;

	//�������� ī�޶� �þ߰�
	float CameraZoomedFOV;

	//���� �����ӿ����� ī�޶� ��
	float CameraCurrentFOV;
	
	//���Ҷ� �ٰ����� �ӵ�
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = Combat, meta = (AllowPrivateAccess = "true"))
	float ZoomInterSpeed;

	//���ڰ��� ��������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairSpreadMultiplier;

	//���ڰ��� ������ ������ ��
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairVelocityFactor;

	//���߿��� ���ڰ��� ������ ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairInAirFactor;

	//���������� ���ڰ��� ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairAimFactor;
	
	//���� ���ڰ��� ���� ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairShootingFactor;

	float ShootTimeDuration;
	bool bFiringBullet;
	FTimerHandle CrosshairShootTimer;

	//�߻� ��ư�� ��������
	bool bFireButtonPressed;

	// ���϶��� �߻� �����϶��� Ÿ�̸Ӹ� ��ٸ���
	bool bShouldFire;

	// �ڵ��߻��� ����
	float AutomaticFireRate;

	//�ѹ߻� ������ Ÿ�̸�
	FTimerHandle AutoFireTimer;
public:
	/*return CameraBoom subobject*/
	FORCEINLINE USpringArmComponent* GetCarmeraBoom() const { return CameraBoom; }

	/*ī�޶� ��ȯ, ī�޶� ����*/
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	FORCEINLINE bool GetAiming() const { return bAiming; }

	UFUNCTION(BlueprintCallable)
	float GetCrosshairSpreadMultiplier() const;
};
