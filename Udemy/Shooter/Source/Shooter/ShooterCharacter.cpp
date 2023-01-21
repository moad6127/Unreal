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
#include "Item.h"
#include "Components/WidgetComponent.h"
#include "Weapon.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Ammo.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Shooter.h"
#include "BulletHitInterface.h"
#include "Enemy.h"

// Sets default values
AShooterCharacter::AShooterCharacter() :
	// �⺻ ����
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f),
	//�����Ҷ��� �������� ������ ����
	HipTurnRate(90.f),
	HipLookUpRate(90.f),
	AimingTurnRate(20.f),
	AimingLookUpRate(20.f),
	// ���콺�� ������
	MouseHipTurnRate(1.0f),
	MouseHipLookUpRate(1.0f),
	MouseAimingTurnRate(0.6f),
	MouseAimingLookUpRate(0.6f),

	//������ �ߴ��� ���ߴ��� �Ǵ��ϴ� ����
	bAiming(false),
	//ī�޶� �� ��
	CameraDefaultFOV(0.f), // beginplay���� ������
	CameraZoomedFOV(25.f),
	CameraCurrentFOV(0.f),
	ZoomInterSpeed(20.f),

	//�߾ӽ��ڰ� �������� ����
	CrosshairSpreadMultiplier(0.f),
	CrosshairVelocityFactor(0.f),
	CrosshairInAirFactor(0.f),
	CrosshairAimFactor(0.f),
	CrosshairShootingFactor(0.f),
	// �Ѿ� �߻�Ÿ�̸� ���� �ʱ�ȭ
	ShootTimeDuration(0.05f),
	bFiringBullet(false),

	//�ڵ��߻� ������
	bShouldFire(true),
	bFireButtonPressed(false),
	//itemTrace
	bShouldTraceForItems(false),
	OverlappedItemCount(0),
	//Camera interpLocation Value
	CameraInterpDistance(250.f),
	CameraInterpElevtion(65.f),
	//Starting Ammo amount
	Starting9mmAmmo(85),
	StartingARAmmo(120),
	//Combat variable
	CombatState(ECombatState::ECS_Unoccupied),
	bCrouching(false),
	BaseMovementSpeed(650.f),
	CrouchMovemnetSpeed(300.f),

	standingCapsuleHlfHeight(88.f),
	CrouchingCapsuleHalfHeight(44.f),
	BaseGroundFriction(2.f),
	CrouchGrouundFriction(100.f),
	bAimingButtonPressed(false),
	//PickupSound timer properties
	bShouldPlayPickupSound(true),
	bShouldPlayEquipSound(true),
	PickupSoundResetTime(0.2f),
	EquipSoundResetTime(0.2f),
	//Icon animation property
	HighlightedSlot(-1),
	Health(100.f),
	MaxHealth(100.f),
	StunChance(.25f)

{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create a CameraBoom (pulls in towards the characeter if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 180.f;//ī�޶� ĳ���� �ڿ��� ����ٴ� ����
	CameraBoom->bUsePawnControlRotation = true;//��Ʈ�ѷ��� �������� ȸ��
	CameraBoom->SocketOffset = FVector(0.f, 50.f,70.f);

	//ī�޶� �����
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);//ī�޶� ī�޶� �ճ��� ����
	FollowCamera->bUsePawnControlRotation = false; //ī�޶�� ȸ������ �ʴ´�

	//ȸ���Ҷ� ī�޶� ȸ���ϰ� �����
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	//ĳ���� �̵�
	GetCharacterMovement()->bOrientRotationToMovement = false;// ĳ���Ͱ� �Է¿� ���� �̵�
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);// ȸ�� 
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	//HandSceneCompont�����(������ �Ҷ� Ŭ���и��� �ʿ�)
	HandSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HandSceneComp"));

	//���� ������� ����
	WeaponInterpComp = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon Interpolation Component"));
	WeaponInterpComp->SetupAttachment(GetFollowCamera());

	InterComp = CreateDefaultSubobject<USceneComponent>(TEXT("Interpolation Component "));
	InterComp->SetupAttachment(GetFollowCamera());

	InterComp2 = CreateDefaultSubobject<USceneComponent>(TEXT("Interpolation Component 2"));
	InterComp2->SetupAttachment(GetFollowCamera());

	InterComp3 = CreateDefaultSubobject<USceneComponent>(TEXT("Interpolation Component 3"));
	InterComp3->SetupAttachment(GetFollowCamera());

	InterComp4 = CreateDefaultSubobject<USceneComponent>(TEXT("Interpolation Component 4"));
	InterComp4->SetupAttachment(GetFollowCamera());

	InterComp5 = CreateDefaultSubobject<USceneComponent>(TEXT("Interpolation Component 5"));
	InterComp5->SetupAttachment(GetFollowCamera());

	InterComp6 = CreateDefaultSubobject<USceneComponent>(TEXT("Interpolation Component 6"));
	InterComp6->SetupAttachment(GetFollowCamera());

}

	float AShooterCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
	{
		if (Health - DamageAmount <= 0.f)
		{
			Health = 0.f;
		}
		else
		{
			Health -= DamageAmount;
		}
		return DamageAmount;
	}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (FollowCamera)
	{
		CameraDefaultFOV = GetFollowCamera()->FieldOfView;
		CameraCurrentFOV = CameraDefaultFOV;
	}
	//�⺻���⸦ ��ȯ�ϰ� �޽��� �����Ѵ�
	EquipWeapon( SpawnDefaultWeapon());
	Inventory.Add(EquippedWeapon);
	EquippedWeapon->SetSlotIndex(0);
	EquippedWeapon->DisableCustomDepth();
	EquippedWeapon->DisableGlowMeterial();
	EquippedWeapon->SetCharacter(this);

	InitializeAmmoMap();
	GetCharacterMovement()->MaxWalkSpeed = BaseMovementSpeed;

	//�迭�� ���ؼ� FInterpLocation����ü�� �����
	initializeInterpLocation();
}

void AShooterCharacter::MoveForward(float Value)
{
	if (CombatState == ECombatState::ECS_Stunned)
	{
		return;
	}
	if ((Controller != nullptr)&&(Value != 0.0f))
	{
		// ������ �� ��ġ ã��
		const FRotator Rotation{ Controller->GetControlRotation() };
		const FRotator YawRotation{ 0,Rotation.Yaw, 0 };

		const FVector Direction{ FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::X) };

		AddMovementInput(Direction, Value);
	}
}

void AShooterCharacter::MoveRight(float Value)
{
	if (CombatState == ECombatState::ECS_Stunned)
	{
		return;
	}
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// ������ �� ��ġ ã��
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

void AShooterCharacter::Turn(float Value)
{
	float TurnScaleFactor{};
	if (bAiming)
	{
		TurnScaleFactor = MouseAimingTurnRate;
	}
	else
	{
		TurnScaleFactor = MouseHipTurnRate;
	}
	AddControllerYawInput(Value * TurnScaleFactor);
}

void AShooterCharacter::LookUp(float Value)
{
	float LookUpRateScaleFactor{};
	if (bAiming)
	{
		LookUpRateScaleFactor = MouseAimingLookUpRate;
	}
	else
	{
		LookUpRateScaleFactor = MouseHipLookUpRate;
	}
	AddControllerPitchInput(Value * LookUpRateScaleFactor);
}

void AShooterCharacter::FireWeapon()
{
	if (EquippedWeapon == nullptr)
	{
		return;
	}
	if (CombatState != ECombatState::ECS_Unoccupied)
	{
		return;
	}
	if (WeaponHasAmmo())
	{
		PlayFireSound();
		SendBullet();
		PlayGunFireMontage();
		//���� Ŭ�������� 1�� ����
		EquippedWeapon->DecrementAmmo();
		// ũ�ν��� ���� �Ѿ˹߻� Ÿ�̸Ӹ� ����
		StartCrosshairBulletFire();

		StartFireTimer();

		if (EquippedWeapon->GetWeaponType() == EWeaponType::EWT_Pistol)
		{
			//Start Moving slide Timer
			EquippedWeapon->StartSlideTimer();
		}
	}



}

bool AShooterCharacter::GetBeamEndLocation(
	const FVector& MuzzleSocketLocation,
	FHitResult& OutHitResult)
{
	FVector OutBeamLocation;
	//ũ�ν���� ���� 
	FHitResult CrosshairHitResult;
	bool bCrosshairHit = TraceUnderCrosshair(CrosshairHitResult, OutBeamLocation);

	if (bCrosshairHit)
	{
		// ������ ���� �ؾ��Ѵ�
		OutBeamLocation = CrosshairHitResult.Location;
	}
	else //���� ����
	{
		// OutBeamLocation �� ���� ��ġ �̴�
	}
	//�߰��� �ٸ���ü�� ������� �װ����� ���� ����Ʈ�� ����
	const FVector WeaponTraceStart{ MuzzleSocketLocation };
	const FVector StartToEnd{ OutBeamLocation - MuzzleSocketLocation };
	const FVector WeaponTraceEnd{ MuzzleSocketLocation + StartToEnd * 1.25f };

	GetWorld()->LineTraceSingleByChannel(OutHitResult,
		WeaponTraceStart,
		WeaponTraceEnd,
		ECollisionChannel::ECC_Visibility);
	if (!OutHitResult.bBlockingHit)
	{
		OutHitResult.Location = OutBeamLocation;
		return false;

	}
	return true;

}

void AShooterCharacter::AimingButtonPressed()
{
	bAimingButtonPressed = true;
	if (CombatState != ECombatState::ECS_Reloading &&
		CombatState != ECombatState::ECS_Equipping &&
		CombatState != ECombatState::ECS_Stunned)
	{
		Aim();
	}
}

void AShooterCharacter::AimingButtonReleased()
{
	bAimingButtonPressed = false;
	StopAiming();
}

void AShooterCharacter::CameraInterpZoom(float DeltaTime)
{
	if (bAiming)
	{
		//���� ��ư�� ���ȴ°�?
		CameraCurrentFOV = FMath::FInterpTo(CameraCurrentFOV, CameraZoomedFOV, DeltaTime, ZoomInterSpeed);
	}
	else// ���� ��ư�� Ǯ������
	{
		CameraCurrentFOV = FMath::FInterpTo(CameraCurrentFOV, CameraDefaultFOV, DeltaTime, ZoomInterSpeed);
	}
	GetFollowCamera()->SetFieldOfView(CameraCurrentFOV);
}

void AShooterCharacter::SetLookRates()
{
	if (bAiming)
	{
		BaseTurnRate = AimingTurnRate;
		BaseLookUpRate = AimingLookUpRate;
	}
	else
	{
		BaseTurnRate = HipTurnRate;
		BaseLookUpRate = HipLookUpRate;
	}
}

void AShooterCharacter::CalculateCrosshairSpread(float DeltaTime)
{
	FVector2D WalkSpeedRange{ 0.f,600.f };
	FVector2D VelocityMultiplierRange{ 0.f, 1.f };
	FVector Velocity{ GetVelocity() };
	Velocity.Z = 0.f;

	CrosshairVelocityFactor = FMath::GetMappedRangeValueClamped(WalkSpeedRange, VelocityMultiplierRange, Velocity.Size());

	//���߿��� ũ�ν���� �� ���ϱ�
	if (GetCharacterMovement()->IsFalling()) 
	{//���߿� ������
		//���߿��� ������ ������
		CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 2.25f, DeltaTime, 2.25f);
	}
	else//ĳ���Ͱ� ���� ������
	{
		//���� ������� ������ �����ϰ� �Ѵ�
		CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 0.f, DeltaTime, 30.f);
	}

	//���������� �߾� ���ڰ��� �� 
	if (bAiming) // ������ �ߴ°�?
	{
		//���� ������ 
		//�ſ� ���� ���� �ָ鼭 �����ϰ� �ϱ�
		CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0.6f, DeltaTime, 30.f);
	}
	else
	{
		//������ ��������
		//�������� ���ư��� ������ �ǵ�����
		CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0.f, DeltaTime, 30.f);
	}
	//True 0.05 second after firing
	if (bFiringBullet)
	{
		CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor, 0.3f, DeltaTime, 60.f);
	}
	else
	{
		CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor, 0.f, DeltaTime, 60.f);
	}

	CrosshairSpreadMultiplier =
		0.5f + 
		CrosshairVelocityFactor + 
		CrosshairInAirFactor -
		CrosshairAimFactor + 
		CrosshairShootingFactor;
}

void AShooterCharacter::StartCrosshairBulletFire()
{
	bFiringBullet = true;

	GetWorldTimerManager().SetTimer(
		CrosshairShootTimer,
		this,
		&AShooterCharacter::FinishCrosshairBulletFire,
		ShootTimeDuration);
}

void AShooterCharacter::FinishCrosshairBulletFire()
{
	bFiringBullet = false;
}

void AShooterCharacter::FireButtonPressed()
{
	bFireButtonPressed = true;
	FireWeapon();
}

void AShooterCharacter::FireButtonReleased()
{
	bFireButtonPressed = false;
}

void AShooterCharacter::StartFireTimer()
{
	if (EquippedWeapon == nullptr)
	{
		return;
	}
	CombatState = ECombatState::ECS_FireTimerInProgress;
	GetWorldTimerManager().SetTimer(
		AutoFireTimer,
		this,
		&AShooterCharacter::AutoFireReset,
		EquippedWeapon->GetAutoFireRate());
}

void AShooterCharacter::AutoFireReset()
{
	if (CombatState == ECombatState::ECS_Stunned)
	{
		return;
	}
	CombatState = ECombatState::ECS_Unoccupied;
	if (EquippedWeapon == nullptr)
	{
		return;
	}
	if (WeaponHasAmmo())
	{
		if (bFireButtonPressed && EquippedWeapon->GetAutomatic())
		{
			FireWeapon();
		}
	}
	else
	{
		ReloadWeapon();
	}
}

bool AShooterCharacter::TraceUnderCrosshair(FHitResult& OutHitResult,FVector& OutHitLocation)
{
	// ����Ʈ ������ ���
	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	//ȭ�鿡���� ũ�ν������ ��ġ
	FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;

	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation,
		CrosshairWorldPosition,
		CrosshairWorldDirection);

	if (bScreenToWorld)
	{
		// ũ�ν���� ���� ��ġ ����
		const FVector Start{ CrosshairWorldPosition };
		const FVector End{ CrosshairWorldPosition + CrosshairWorldDirection * 50'000.f };
		OutHitLocation = End;
		GetWorld()->LineTraceSingleByChannel(
			OutHitResult,
			Start,
			End,
			ECollisionChannel::ECC_Visibility);
		if (OutHitResult.bBlockingHit)
		{
			OutHitLocation = OutHitResult.Location;
			return true;
		}
	}
	return false;
}

void AShooterCharacter::TraceForItem()
{
	if (bShouldTraceForItems)
	{
		FHitResult ItemTracceResult;
		FVector HitLocation;
		TraceUnderCrosshair(ItemTracceResult, HitLocation);
		if (ItemTracceResult.bBlockingHit)
		{
			TraceHitItem = Cast<AItem>(ItemTracceResult.GetActor());
			const auto TraceHitWeapon = Cast<AWeapon>(TraceHitItem);
			if (TraceHitWeapon)
			{
				if (HighlightedSlot == -1)
				{
					HighlightInventorySlot();
				}
			}
			else
			{
				if (HighlightedSlot != -1)
				{
					UnHighlightInventorySlot();
				}
			}
			if (TraceHitItem && TraceHitItem->GetItemState() == EItemState::EIS_EquipInterping)
			{
				TraceHitItem = nullptr;
			}
			if (TraceHitItem && TraceHitItem->GetPickupWidget())
			{
				// �������� �Ⱦ� ������ ���̰� �����
				TraceHitItem->GetPickupWidget()->SetVisibility(true);
				TraceHitItem->EnableCustomDepth();

				if (Inventory.Num() >= INVENTORY_CAPACITY)
				{
					//�κ��丮�� ���� á����
					TraceHitItem->SetCharacterInventoryFull(true);
				}
				else
				{
					//�κ��丮�� ������ ������
					TraceHitItem->SetCharacterInventoryFull(false);
				}
			}
			//
			if (TraceHitItemLastFrame)
			{
				if (TraceHitItem != TraceHitItemLastFrame)
				{
					//���������Ӱ� �ٸ� �������̸� ���ü��� ����
					//�Ǵ� ���ϰ�쿡��
					TraceHitItemLastFrame->GetPickupWidget()->SetVisibility(false);
					TraceHitItemLastFrame->DisableCustomDepth();
				}
			}
			// hititem�� �����Ѵ�
			TraceHitItemLastFrame = TraceHitItem;
		}
	}
	else if (TraceHitItemLastFrame)
	{
		//�ƹ��͵� ��ġ�� �ʾ�����
		//������ �������� �������� ������ ǥ�õǸ� �ȵȴ�.
		TraceHitItemLastFrame->GetPickupWidget()->SetVisibility(false);
		TraceHitItemLastFrame->DisableCustomDepth();
	}

}

AWeapon* AShooterCharacter::SpawnDefaultWeapon()
{
	//TSubClass���� Ȯ��
	if (DefaultWeaponClass)
	{
		//���� ����
		return GetWorld()->SpawnActor<AWeapon>(DefaultWeaponClass);
	}

	return nullptr;
}

void AShooterCharacter::EquipWeapon(AWeapon* WeaponToEquip, bool bSwaping)
{
	if (WeaponToEquip)
	{

		//�ڵ� ���� ���
		const USkeletalMeshSocket* HandSocket = GetMesh()->GetSocketByName(
			FName("RightHandSocket"));

		if (HandSocket)
		{
			//�ռ��Ͽ� ���� �����ϱ�
			HandSocket->AttachActor(WeaponToEquip, GetMesh());
		}

		if (EquippedWeapon == nullptr)
		{
			// -1 == ���� ������ ���Ⱑ ���� ��Ȳ, ������ �ִϸ��̼��� �ʿ� ����
			EquipItemDelegate.Broadcast(-1, WeaponToEquip->GetSlotIndex());
		}
		else if (!bSwaping)
		{
			EquipItemDelegate.Broadcast(EquippedWeapon->GetSlotIndex(), WeaponToEquip->GetSlotIndex());
		}

		

		//���� �������� ���⸦ ����Ʈ �������� �����ϱ�
		EquippedWeapon = WeaponToEquip;
		EquippedWeapon->SetItemState(EItemState::EIS_Equipped);
	}
}

void AShooterCharacter::DropWeapon()
{
	if (EquippedWeapon)
	{
		FDetachmentTransformRules DetachmentTransformRules(EDetachmentRule::KeepWorld, true);
		EquippedWeapon->GetItemMesh()->DetachFromComponent(DetachmentTransformRules);

		EquippedWeapon->SetItemState(EItemState::EIS_Falling);
		EquippedWeapon->ThrowWeapon();
	}
}

void AShooterCharacter::SelectButtonPressed()
{
	if (CombatState != ECombatState::ECS_Unoccupied)
	{
		return;
	}
	if (TraceHitItem)
	{
		TraceHitItem->StartItemCurve(this,true);
		TraceHitItem = nullptr;
	}

}

void AShooterCharacter::SelectButtonReleased()
{
}

void AShooterCharacter::InitializeAmmoMap()
{
	AmmoMap.Add(EAmmoType::EAT_9mm, Starting9mmAmmo);
	AmmoMap.Add(EAmmoType::EAT_AR, StartingARAmmo);
}

bool AShooterCharacter::WeaponHasAmmo()
{
	if (EquippedWeapon == nullptr)
	{
		return false;
	}

	return EquippedWeapon->GetAmmo()>0;
}

void AShooterCharacter::PlayFireSound()
{
	// �� �߻�� ������ �Ҹ�
	if (EquippedWeapon->GetFireSound())
	{
		UGameplayStatics::PlaySound2D(this, EquippedWeapon->GetFireSound());
	}
}

void AShooterCharacter::SendBullet()
{
	//�Ѿ� ������ ���ó���
	const USkeletalMeshSocket* BarrelSocket = EquippedWeapon->GetItemMesh()->GetSocketByName("BarrelSocket");
	if (BarrelSocket)
	{
		const FTransform SocketTransform = BarrelSocket->GetSocketTransform(EquippedWeapon->GetItemMesh());

		if (EquippedWeapon->GetMuzzleFlash())
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), EquippedWeapon->GetMuzzleFlash(), SocketTransform);
		}
		FHitResult BeamHitReuslt;
		bool bBeamEnd = GetBeamEndLocation(SocketTransform.GetLocation(),
			BeamHitReuslt);
		if (bBeamEnd)
		{
			// ���� ���Ϳ� BulletHitInterface�� ����ϰ��ִ°�?
			if (BeamHitReuslt.Actor.IsValid())
			{
				IBulletHitInterface* BulletHitInterface = Cast<IBulletHitInterface>(BeamHitReuslt.Actor.Get());
				if (BulletHitInterface)
				{
					BulletHitInterface->BulletHit_Implementation(BeamHitReuslt);
				}
				else
				{
					// �⺻ ��ƼŬ ����
					if (ImpactParticles)
					{
						UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),
							ImpactParticles,
							BeamHitReuslt.Location);
					}
				}
				AEnemy* HitEnemy = Cast<AEnemy>(BeamHitReuslt.Actor.Get());
				if (HitEnemy)
				{
					int32 Damage{};
					bool bHeadShot{ false };
					if (BeamHitReuslt.BoneName.ToString() == HitEnemy->GetHeadBone())
					{
						//HeadShot
						Damage = EquippedWeapon->GetHeadShotDamage();
						bHeadShot = true;
					}
					else
					{
						//BodyShot
						Damage = EquippedWeapon->GetDamage();
					}
					UGameplayStatics::ApplyDamage(
						BeamHitReuslt.Actor.Get(),
						Damage,
						GetController(),
						this,
						UDamageType::StaticClass());
					HitEnemy->ShowHitNumber(Damage, BeamHitReuslt.Location,bHeadShot);
				}
			}

			UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(
				GetWorld(),
				BeamParticles,
				SocketTransform);
			if (Beam)
			{
				Beam->SetVectorParameter(FName("Target"), BeamHitReuslt.Location);
			}
		}
	}
}

void AShooterCharacter::PlayGunFireMontage()
{
	//�ѹ߻� �ִϸ��̼�
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && HipFireMontage)
	{
		AnimInstance->Montage_Play(HipFireMontage);
		AnimInstance->Montage_JumpToSection(FName("StartFire"));
	}
}

void AShooterCharacter::ReloadButtonPressed()
{
	ReloadWeapon();
}

void AShooterCharacter::ReloadWeapon()
{
	if (CombatState != ECombatState::ECS_Unoccupied)
	{
		return;
	}

	if (EquippedWeapon == nullptr)
	{
		return;
	}
	//�´� Ÿ���� ź���� �ִ��� Ȯ���ϱ�
	if (CarryingAmmo()&& !EquippedWeapon->ClipIsFull())
	{
		if (bAiming)
		{
			StopAiming();
		}
		CombatState = ECombatState::ECS_Reloading;
		UAnimInstance* Animinstance = GetMesh()->GetAnimInstance();
		if (Animinstance && ReloadMontage)
		{
			Animinstance->Montage_Play(ReloadMontage);
			Animinstance->Montage_JumpToSection(EquippedWeapon->GetReloadMontageSection());
		}
	}
}

bool AShooterCharacter::CarryingAmmo()
{
	if (EquippedWeapon == nullptr)
	{
		return false;
	}
	auto AmmoType = EquippedWeapon->GetAmmoType();

	if (AmmoMap.Contains(AmmoType))
	{
		return AmmoMap[AmmoType] > 0;
	}
	return false;
}

void AShooterCharacter::GrabClip()
{
	if (EquippedWeapon == nullptr)
	{
		return;
	}
	if (HandSceneComponent == nullptr)
	{
		return;
	}
	//���� ������ źâ�� ���̷��� ���� ���ؽ�
	int32 ClipBoneIndex{ EquippedWeapon->GetItemMesh()->GetBoneIndex(EquippedWeapon->GetClipBoneName()) };
	//Ŭ�� Ʈ�������� ����
	ClipTransform =  EquippedWeapon->GetItemMesh()->GetBoneTransform(ClipBoneIndex);

	FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepRelative, true);
	HandSceneComponent->AttachToComponent(GetMesh(), AttachmentRules, FName(TEXT("Hand_L")));
	HandSceneComponent->SetWorldTransform(ClipTransform);

	EquippedWeapon->SetMovingClip(true);
}

void AShooterCharacter::ReleaseClip()
{
	EquippedWeapon->SetMovingClip(false);
}

void AShooterCharacter::CrouchButtonPressed()
{
	if (!GetCharacterMovement()->IsFalling())
	{
		bCrouching = !bCrouching;
	}
	if (bCrouching)
	{
		GetCharacterMovement()->MaxWalkSpeed = CrouchMovemnetSpeed;
		GetCharacterMovement()->GroundFriction = CrouchGrouundFriction;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = BaseMovementSpeed;
		GetCharacterMovement()->GroundFriction = BaseGroundFriction;
	}
}

void AShooterCharacter::Jump()
{
	if (bCrouching)
	{
		bCrouching = false;
		GetCharacterMovement()->MaxWalkSpeed = BaseMovementSpeed;
	}
	else
	{
		Super::Jump();
	}
}

void AShooterCharacter::InterpCapsuleHalfHeight(float DeltaTime)
{
	float TargetCapsulHalfHeight{};
	if (bCrouching)
	{
		TargetCapsulHalfHeight = CrouchingCapsuleHalfHeight;
	}
	else
	{
		TargetCapsulHalfHeight = standingCapsuleHlfHeight;
	}
	const float InterpHalfHeight{ 
		FMath::FInterpTo(GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),
		TargetCapsulHalfHeight,
		DeltaTime,
		20.f) };

	//��ũ���� ������ ����, ��������� ���
	const float DeltaCapsuleHalfHeight{ InterpHalfHeight - GetCapsuleComponent()->GetScaledCapsuleHalfHeight() };
	const FVector MeshOffset{ 0.f,0.f, -DeltaCapsuleHalfHeight };
	GetMesh()->AddLocalOffset(MeshOffset);


	GetCapsuleComponent()->SetCapsuleHalfHeight(InterpHalfHeight);

}

void AShooterCharacter::Aim()
{
	bAiming = true;
	GetCharacterMovement()->MaxWalkSpeed = CrouchMovemnetSpeed;
}

void AShooterCharacter::StopAiming()
{
	bAiming = false;
	if (!bCrouching)
	{
		GetCharacterMovement()->MaxWalkSpeed = BaseMovementSpeed;
	}
}

void AShooterCharacter::PickupAmmo(AAmmo* Ammo)
{
	//AmmoMap �� AmmoType�� �ִ��� Ȯ���ϱ�
	if (AmmoMap.Find(Ammo->GetAmmoType()))
	{
		//���� ������ �ִ� Ammo ���� �����´�
		int32 AmmoCount{ AmmoMap[Ammo->GetAmmoType()] };
		AmmoCount += Ammo->GetItmeCount();
		//���� �������ִ� ammo + ���� Ammo�� �ؼ� �ٽ� �����ϱ�
		AmmoMap[Ammo->GetAmmoType()] = AmmoCount;
	}

	if (EquippedWeapon->GetAmmoType() == Ammo->GetAmmoType())
	{
		// ���� ���⿡ �Ѿ��� ������
		if (EquippedWeapon->GetAmmo() == 0)
		{
			ReloadWeapon();
		}
	}

	Ammo->Destroy();
}

void AShooterCharacter::initializeInterpLocation()
{
	FInterpLocation WeaponLocation{ WeaponInterpComp, 0 };
	InterpLocation.Add(WeaponLocation);

	FInterpLocation InterpLoc1{ InterComp,0 };
	InterpLocation.Add(InterpLoc1);

	FInterpLocation InterpLoc2{ InterComp2,0 };
	InterpLocation.Add(InterpLoc2);

	FInterpLocation InterpLoc3{ InterComp3,0 };
	InterpLocation.Add(InterpLoc3);

	FInterpLocation InterpLoc4{ InterComp4,0 };
	InterpLocation.Add(InterpLoc4);

	FInterpLocation InterpLoc5{ InterComp5,0 };
	InterpLocation.Add(InterpLoc5);

	FInterpLocation InterpLoc6{ InterComp6,0 };
	InterpLocation.Add(InterpLoc6);
}

void AShooterCharacter::FKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 0)
	{
		return;
	}
	ExchangeInventoryItem(EquippedWeapon->GetSlotIndex(), 0);
}

void AShooterCharacter::OneKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 1)
	{
		return;
	}
	ExchangeInventoryItem(EquippedWeapon->GetSlotIndex(), 1);
}

void AShooterCharacter::TwoKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 2)
	{
		return;
	}
	ExchangeInventoryItem(EquippedWeapon->GetSlotIndex(), 2);
}

void AShooterCharacter::ThreeKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 3)
	{
		return;
	}
	ExchangeInventoryItem(EquippedWeapon->GetSlotIndex(), 3);
}

void AShooterCharacter::FourKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 4)
	{
		return;
	}
	ExchangeInventoryItem(EquippedWeapon->GetSlotIndex(), 4);
}

void AShooterCharacter::FiveKeyPressed()
{
	if (EquippedWeapon->GetSlotIndex() == 5)
	{
		return;
	}
	ExchangeInventoryItem(EquippedWeapon->GetSlotIndex(), 5);
}

void AShooterCharacter::ExchangeInventoryItem(int32 CurrentItemIndex, int32 NewItemIndex)
{
	const bool bCanExchangeItems = 
		(CurrentItemIndex != NewItemIndex) &&
		(NewItemIndex < Inventory.Num()) &&
		((CombatState == ECombatState::ECS_Unoccupied) || CombatState == ECombatState::ECS_Equipping);
	if (bCanExchangeItems)
	{
		if (bAiming)
		{
			StopAiming();
		}
		auto OldEquippedWeapon = EquippedWeapon;
		auto NewWeapon = Cast<AWeapon>(Inventory[NewItemIndex]);
		EquipWeapon(NewWeapon);

		OldEquippedWeapon->SetItemState(EItemState::EIS_PickedUp);
		NewWeapon->SetItemState(EItemState::EIS_Equipped);
		CombatState = ECombatState::ECS_Equipping;
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && EquipMontage)
		{
			AnimInstance->Montage_Play(EquipMontage, 1.f);
			AnimInstance->Montage_JumpToSection(FName("Equip"));
		}
		NewWeapon->PlayEquipSound(true);
	}

}

int32 AShooterCharacter::GetEmptyInventorySlot()
{
	for (int32 i = 0; i < Inventory.Num(); i++)
	{
		if (Inventory[i] == nullptr)
		{
			return i;
		}
	}
	if (Inventory.Num() < INVENTORY_CAPACITY)
	{
		return Inventory.Num();
	}
	return -1; //�κ��丮�� ���� ��������� ���� ����
}

void AShooterCharacter::HighlightInventorySlot()
{
	const int32 EmptySlot{ GetEmptyInventorySlot() };
	HighlightIconDelegate.Broadcast(EmptySlot, true);
	HighlightedSlot = EmptySlot;

}

EPhysicalSurface AShooterCharacter::GetSurfaceType()
{
	FHitResult HitResult;
	const FVector Start{ GetActorLocation() };
	const FVector End{ Start + FVector(0.f,0.f,-400.f) };
	FCollisionQueryParams QueryParms;
	QueryParms.bReturnPhysicalMaterial = true;

	GetWorld()->LineTraceSingleByChannel(
		HitResult,
		Start,
		End,
		ECollisionChannel::ECC_Visibility,
		QueryParms);
	return UPhysicalMaterial::DetermineSurfaceType(HitResult.PhysMaterial.Get());
} 

void AShooterCharacter::EndStun()
{
	CombatState = ECombatState::ECS_Unoccupied;
	if (bAimingButtonPressed)
	{
		Aim();
	}
}

void AShooterCharacter::UnHighlightInventorySlot()
{
	HighlightIconDelegate.Broadcast(HighlightedSlot, false);
	HighlightedSlot = -1;
}

void AShooterCharacter::Stun()
{
	CombatState = ECombatState::ECS_Stunned;

	UAnimInstance* AnimInstnace = GetMesh()->GetAnimInstance();
	if (AnimInstnace && HitReactMontage)
	{
		AnimInstnace->Montage_Play(HitReactMontage);
	}
}

int32 AShooterCharacter::GetInterpLocationIndex()
{
	int32 LowestIndex = 1;
	int32 LowestCount = INT_MAX;
	for (int32 i = 1; i < InterpLocation.Num(); i++)
	{
		if (InterpLocation[i].ItemCount < LowestCount)
		{
			LowestIndex = i;
			LowestCount = InterpLocation[i].ItemCount;
		}
	}
	return LowestIndex;
}


// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//�ڿ������� ȭ�� ��ȯ�� ���ؼ�
	CameraInterpZoom(DeltaTime);

	//�������� ������ �޶����� �����
	SetLookRates();

	//�߾� ũ�ν������ ���� ���
	CalculateCrosshairSpread(DeltaTime);

	//������ ī��Ʈ�� üũ�ϰ� Ʈ��� �����Ѵ�.
	TraceForItem();

	//ĳ����ĸ���� ��ũ����� �������� �ٸ��� �����ϱ�
	InterpCapsuleHalfHeight(DeltaTime);
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

	PlayerInputComponent->BindAxis("Turn", this, &AShooterCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AShooterCharacter::LookUp);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AShooterCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("FireButton", IE_Pressed, this, &AShooterCharacter::FireButtonPressed);
	PlayerInputComponent->BindAction("FireButton", IE_Released, this, &AShooterCharacter::FireButtonReleased);

	PlayerInputComponent->BindAction("AimingButton", IE_Pressed, this, &AShooterCharacter::AimingButtonPressed);
	PlayerInputComponent->BindAction("AimingButton", IE_Released, this, &AShooterCharacter::AimingButtonReleased);

	PlayerInputComponent->BindAction("Select", IE_Pressed, this, &AShooterCharacter::SelectButtonPressed);
	PlayerInputComponent->BindAction("Select", IE_Released, this, &AShooterCharacter::SelectButtonReleased);

	PlayerInputComponent->BindAction("ReloadButton", IE_Pressed, this, &AShooterCharacter::ReloadButtonPressed);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AShooterCharacter::CrouchButtonPressed);


	PlayerInputComponent->BindAction("FKey", IE_Pressed, this, &AShooterCharacter::FKeyPressed);
	PlayerInputComponent->BindAction("1Key", IE_Pressed, this, &AShooterCharacter::OneKeyPressed);
	PlayerInputComponent->BindAction("2Key", IE_Pressed, this, &AShooterCharacter::TwoKeyPressed);
	PlayerInputComponent->BindAction("3Key", IE_Pressed, this, &AShooterCharacter::ThreeKeyPressed);
	PlayerInputComponent->BindAction("4Key", IE_Pressed, this, &AShooterCharacter::FourKeyPressed);
	PlayerInputComponent->BindAction("5Key", IE_Pressed, this, &AShooterCharacter::FiveKeyPressed);

}

void AShooterCharacter::SwapWeapon(AWeapon* WeaponToSwap)
{
	if (Inventory.Num() - 1 >= EquippedWeapon->GetSlotIndex())
	{
		Inventory[EquippedWeapon->GetSlotIndex()] = WeaponToSwap;
		WeaponToSwap->SetSlotIndex(EquippedWeapon->GetSlotIndex());
	}

	DropWeapon();
	EquipWeapon(WeaponToSwap,true);
	TraceHitItem = nullptr;
	TraceHitItemLastFrame = nullptr;
}

void AShooterCharacter::FinishReloading()
{
	if (CombatState == ECombatState::ECS_Stunned)
	{
		return;
	}
	//combat State������Ʈ
	CombatState = ECombatState::ECS_Unoccupied;

	if (bAimingButtonPressed)
	{
		Aim();
	}

	if (EquippedWeapon == nullptr)
	{
		return;
	}

	const auto AmmoType{ EquippedWeapon->GetAmmoType() };
	//ammo map������Ʈ
	if (AmmoMap.Contains(AmmoType))
	{
		//���� ĳ���Ͱ� ����ִ� ������ ���� ������ �ִ� ź���� ��
		int32 CarriedAmmo = AmmoMap[AmmoType];

		//�󸶳� ������ �ؾ��ϴ��� üũ
		const int32 MagEmptySpace =
			EquippedWeapon->GetMagazineCapacity() -
			EquippedWeapon->GetAmmo();
		if (MagEmptySpace > CarriedAmmo)
		{
			//����ִ� ź���� ���� �������ϱ�
			EquippedWeapon->ReloadAmmo(CarriedAmmo);
			CarriedAmmo = 0;
			AmmoMap.Add(AmmoType, CarriedAmmo);
		}
		else
		{
			//�ִ� �뷮��ŭ �������ϱ�
			EquippedWeapon->ReloadAmmo(MagEmptySpace);
			CarriedAmmo -= MagEmptySpace;
			AmmoMap.Add(AmmoType, CarriedAmmo);
		}
	}
}

void AShooterCharacter::FinishEquipping()
{
	if (CombatState == ECombatState::ECS_Stunned)
	{
		return;
	}
	CombatState = ECombatState::ECS_Unoccupied;
	if (bAimingButtonPressed)
	{
		Aim();
	}
}


void AShooterCharacter::ResetPickupSoundTimer()
{
	bShouldPlayPickupSound = true;
}

void AShooterCharacter::ResetEquipSoundTimer()
{
	bShouldPlayEquipSound = true;
}

float AShooterCharacter::GetCrosshairSpreadMultiplier() const
{
	return CrosshairSpreadMultiplier;
}

void AShooterCharacter::IncrementOverlappedItemCount(int8 Amount)
{
	if (OverlappedItemCount + Amount <= 0)
	{
		OverlappedItemCount = 0;
		bShouldTraceForItems = false;
	}
	else
	{
		OverlappedItemCount += Amount;
		bShouldTraceForItems = true;
	}
}

//AItem�� InterpLocaiton�� ��� �Լ��� �־ ���̻� �ʿ� ����
//FVector AShooterCharacter::GetCameraInterpLocation()
//{
//	const FVector CameraWorldLocation{ FollowCamera->GetComponentLocation() };
//	const FVector CameraForward{ FollowCamera->GetForwardVector() };
//
//	// ���ϴ� ��ġ�� = CameraWorldLocation +CameraForward * A + Up * B;
//	return CameraWorldLocation + CameraForward * CameraInterpDistance
//		+ FVector(0.f, 0.f, CameraInterpElevtion);
//
//}

void AShooterCharacter::GetPickupItem(AItem* Item)
{
	Item->PlayEquipSound();

	auto Weapon = Cast<AWeapon>(Item);
	if (Weapon)
	{
		if (Inventory.Num() < INVENTORY_CAPACITY)
		{
			Weapon->SetSlotIndex(Inventory.Num());
			Inventory.Add(Weapon);
			Weapon->SetItemState(EItemState::EIS_PickedUp);
		}
		else // �κ��丮�� ���� ��������� ���⸦ �ٲ۴�.
		{
			SwapWeapon(Weapon);
		}

	}

	auto Ammo = Cast<AAmmo>(Item);
	if (Ammo)
	{
		PickupAmmo(Ammo);
	}
}

FInterpLocation AShooterCharacter::GetInterpLocation(int32 Index)
{
	if (Index <= InterpLocation.Num())
	{
		return InterpLocation[Index];
	}
	return FInterpLocation();
}


void AShooterCharacter::IncrementInterpLocItemCount(int32 Index, int32 Amount)
{
	if (Amount < -1 || Amount > 1)
	{
		return;
	}
	if (InterpLocation.Num() >= Index)
	{
		InterpLocation[Index].ItemCount += Amount;
	}
}

void AShooterCharacter::StartPickupSoundTiemr()
{
	bShouldPlayPickupSound = false;
	GetWorldTimerManager().SetTimer(
		PickupSoundTimer,
		this,
		&AShooterCharacter::ResetPickupSoundTimer,
		PickupSoundResetTime);
}

void AShooterCharacter::StartEquipSoundTiemr()
{
	bShouldPlayEquipSound = false;
	GetWorldTimerManager().SetTimer(
		EquipSoundTimer,
		this,
		&AShooterCharacter::ResetEquipSoundTimer,
		EquipSoundResetTime);
}

