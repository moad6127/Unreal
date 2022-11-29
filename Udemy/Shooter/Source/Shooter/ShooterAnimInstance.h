// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ShooterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API UShooterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UShooterAnimInstance();

	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);
	
	virtual void NativeInitializeAnimation() override;
protected:

	//handle turning in place variables
	void TurnInPlace();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	class AShooterCharacter* ShooterCharacter;

	//캐릭터의 속도
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = Movement, meta = (AllowPrivateAccess = "true"))
	float Speed;

	//캐릭터가 공중에 떠있는 상태인가
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bIsInAir;

	//지금 캐릭터가 움직이는 중인가를 나타냄
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bIsAccelerating;

	//offsetyaw used for strafing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float MovementOffsetYaw;

	//이동을 멈추기 전 움직임
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float LastMovementOffsetYaw;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bAiming;


	//Yaw of the Character this frame
	float CharacterYaw;

	//Yaw of the Character the previous frame
	float CharacterYawLastFrame;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TurnInPlace, meta = (AllowPrivateAccess = "true"))
	float RootYawOffset;


	//이번 프레임의 회전곡선 값
	float RotationCurve;

	//이전 프레임값의 회전곡선값
	float RotationCurveLastFrame;

	//The Pitch of the aim rotation, use for Aim Offest
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TurnInPlace, meta = (AllowPrivateAccess = "true"))
	float Pitch;

	//True when reloading, use to prevent Aim Offset while reloading 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TurnInPlace, meta = (AllowPrivateAccess = "true"))
	bool bReloading;
};
