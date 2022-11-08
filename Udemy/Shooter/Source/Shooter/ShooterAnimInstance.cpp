// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAnimInstance.h"
#include "ShooterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UShooterAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if (ShooterCharacter == nullptr)
	{
		ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());
	}
	if (ShooterCharacter)
	{
		// Velocity���� ĳ������ �ӵ� ���
		FVector Velocity{ ShooterCharacter->GetVelocity() };
		Velocity.Z = 0;
		Speed = Velocity.Size();
		
		// ĳ���Ͱ� ���߿� ���ִ°�?
		bIsInAir = ShooterCharacter->GetCharacterMovement()->IsFalling();

		//ĳ���Ͱ� �������ΰ�?
		if (ShooterCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f)
		{
			bIsAccelerating = true;
		}
		else
		{
			bIsAccelerating = false;
		}

		FRotator AimRotation = ShooterCharacter->GetBaseAimRotation();

		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(
			ShooterCharacter->GetVelocity());

		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation).Yaw;


		//FString RotationMessage = FString::Printf(TEXT("Base Aim Ratotion: %f"), AimRotation.Yaw);


		//FString MovementRotationMessage = FString::Printf(TEXT("Movement Rotation: %f"), MovementRotation.Yaw);

		//FString OffsetMessage = FString::Printf(TEXT("Movemetn Ofsset Yaw: %f"), MovementOffsetYaw);

		/*if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 0.f, FColor::White, OffsetMessage);
		}*/
	}
}

void UShooterAnimInstance::NativeInitializeAnimation()
{
	ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());
}
