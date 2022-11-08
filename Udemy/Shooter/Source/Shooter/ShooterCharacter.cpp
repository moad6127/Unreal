// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Engine/SkeletalMeshSocket.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AShooterCharacter::AShooterCharacter() :
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create a CameraBoom (pulls in towards the characeter if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.f;//카메라가 캐릭터 뒤에서 따라다닐 길이
	CameraBoom->bUsePawnControlRotation = true;//컨트롤러를 기준으로 회전
	CameraBoom->SocketOffset = FVector(0.f, 50.f, 50.f);

	//카메라 만들기
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);//카메라를 카메라 붐끝에 연결
	FollowCamera->bUsePawnControlRotation = false; //카메라는 회전하지 않는다

	//회전할때 카메라만 회전하게 만들기
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	//캐릭터 이동
	GetCharacterMovement()->bOrientRotationToMovement = false;// 캐릭터가 입력에 따라 이동
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);// 회전 
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AShooterCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr)&&(Value != 0.0f))
	{
		// 앞으로 갈 위치 찾기
		const FRotator Rotation{ Controller->GetControlRotation() };
		const FRotator YawRotation{ 0,Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X) };

		AddMovementInput(Direction, Value);
	}
}

void AShooterCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// 옆으로 갈 위치 찾기
		const FRotator Rotation{ Controller->GetControlRotation() };
		const FRotator YawRotation{ 0,Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::Y) };

		AddMovementInput(Direction, Value);
	}
}

void AShooterCharacter::TurnAtRate(float Rate)
{
	//
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds()); //deg/sec * sec/frame
}

void AShooterCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AShooterCharacter::FireWeapon()
{
	if (FireSound)
	{
		UGameplayStatics::PlaySound2D(this, FireSound);
	}
	const USkeletalMeshSocket* BarrelSocket = GetMesh()->GetSocketByName("BarrelSocket");
	if (BarrelSocket)
	{
		const FTransform SocketTransform = BarrelSocket->GetSocketTransform(GetMesh());

		if (MuzzleFlash)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlash, SocketTransform);
		}

		//뷰포트의 사이즈의 정보를 얻기
		FVector2D ViewportSize;
		if (GEngine && GEngine->GameViewport)
		{
			GEngine->GameViewport->GetViewportSize(ViewportSize);
		}

		//화면에서의 크로스헤어의 위치
		FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
		CrosshairLocation.Y -= 50.f;
		FVector CrosshairWorldPosition;
		FVector CrosshairWorldDirection;

		//크로스 헤어의 월드 포지션과 방향
		bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(this, 0),
			CrosshairLocation, CrosshairWorldPosition, CrosshairWorldDirection);
		if (bScreenToWorld)// 성공했으면
		{
			FHitResult ScreenTraceHit;
			const FVector Start{ CrosshairWorldPosition };
			const FVector End{ CrosshairWorldPosition + CrosshairWorldDirection * 50'000.f };

			//빔 엔드를 추적중인 엔드포인트로 바꿈
			FVector BeamEndPoint{ End };
			GetWorld()->LineTraceSingleByChannel(ScreenTraceHit, Start, End, ECollisionChannel::ECC_Visibility);
			if (ScreenTraceHit.bBlockingHit)//다른 물건에 맞았는지 체크
			{
				//빔 엔드포인트는 맞았을시 위치로
				BeamEndPoint = ScreenTraceHit.Location;

			}

			//중간에 다른물체가 있을경우 그곳으로 엔드 포인트를 설정
			FHitResult WeaponTraceHit;
			const FVector WeaponTraceStart{ SocketTransform.GetLocation() };
			const FVector WeaponTraceEnd{ BeamEndPoint };
			GetWorld()->LineTraceSingleByChannel(WeaponTraceHit,
				WeaponTraceStart,
				WeaponTraceEnd,
				ECollisionChannel::ECC_Visibility);
			if (WeaponTraceHit.bBlockingHit)
			{
				BeamEndPoint = WeaponTraceHit.Location;
			}
			//빔과 포인트를 업데이트후 파티클 생성
			if (ImpactParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(
					GetWorld(),
					ImpactParticles,
					BeamEndPoint);
			}
			if (BeamParticles)
			{
				UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BeamParticles, SocketTransform);
				if (Beam)
				{
					Beam->SetVectorParameter(FName("Target"), BeamEndPoint);
				}
			}
		}


		//	FHitResult FireHit;
		//	const FVector Start{ SocketTransform.GetLocation() };
		//	const FQuat Rotation{ SocketTransform.GetRotation() };
		//	const FVector RotationAxis{ Rotation.GetAxisX() };
		//	const FVector End{ Start + RotationAxis * 50'000.f };

		//	FVector BeamEndPoint{ End };

		//	GetWorld()->LineTraceSingleByChannel(FireHit, Start, End,
		//		ECollisionChannel::ECC_Visibility);
		//	if (FireHit.bBlockingHit)
		//	{
		//		//DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.f);
		//		//DrawDebugPoint(GetWorld(), FireHit.Location, 5.f, FColor::Red, false, 2.f);

		//		BeamEndPoint = FireHit.Location;

		//		if (ImpactParticles)
		//		{
		//			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticles, FireHit.Location);
		//		}
		//	}
		//	if (BeamParticles)
		//	{
		//		UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BeamParticles, SocketTransform);
		//		if (Beam)
		//		{
		//			Beam->SetVectorParameter(FName("Target"),BeamEndPoint);
		//		}
		//	}
		//}


		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && HipFireMontage)
		{
			AnimInstance->Montage_Play(HipFireMontage);
			AnimInstance->Montage_JumpToSection(FName("StartFire"));
		}
	}
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AShooterCharacter::MoveRight);
	PlayerInputComponent->BindAxis("TurnRate", this, &AShooterCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AShooterCharacter::LookUpAtRate);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("FireButton", IE_Pressed, this, &AShooterCharacter::FireWeapon);
}

