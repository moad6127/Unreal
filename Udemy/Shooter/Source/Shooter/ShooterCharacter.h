// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AmmoType.h"
#include "ShooterCharacter.generated.h"


UENUM(BlueprintType)
enum class ECombatState : uint8
{
	ECS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	ECS_FireTimerInProgress UMETA(DisplayName = "FireTimerInProgress"),
	ECS_Reloading UMETA(DisplayName = "Reloading"),
	ECS_Equipping UMETA(DisplayName = "Equipping"),
	ECS_Stunned UMETA(DisplayName = "Stunned"),

	ECS_MAX UMETA(DisplayName = "DefaultMAX")
};
USTRUCT(BlueprintType)
struct FInterpLocation
{
	GENERATED_BODY()

		//ScecnComponent to use for its location for interping
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* SceneComponent;

	//Number of items interping to/at this scene comp location
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 ItemCount;
};
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquipItemDelegate, int32, CurrentSlotIndex, int32, NewSlotIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHighlightIconDelegate, int32, SlotIndex, bool, bStartAnimation);

UCLASS()
class SHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

	//데미지 입기
	virtual float TakeDamage(
		float DamageAmount,
		struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator,
		AActor* DamageCauser) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 앞과 뒤로 움직일때 필요한 함수
	void MoveForward(float Value);

	//좌우로 움직이기
	void MoveRight(float Value);

	//주어진 속도로 회전하는 함수
	//정규화된 비율 즉 1은 100%로 회전
	void TurnAtRate(float Rate);


	//위아래를 보기위해서 만든 함수
	//정규화되서1은 100%이다

	void LookUpAtRate(float Rate);

	//마우스 움직임에 따라서 회전
	void Turn(float Value);

	//마우스 움직임에 대해서 회전
	void LookUp(float Value);

	//발사 버튼 누르기
	void FireWeapon();

	bool GetBeamEndLocation(const FVector& MuzzleSocketLocation, FHitResult& OutHitResult);

	//에임 버튼을눌렀을때 나오는 함수들
	void AimingButtonPressed();
	void AimingButtonReleased();

	void CameraInterpZoom(float DeltaTime);


	//감도들을 조절하는 기능
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

	//크로스 헤어 바로 아래 추적하기
	bool TraceUnderCrosshair(FHitResult& OutHitResult,FVector& OutHitLocation);

	//만약 다른 물건과 겹침이 발생하면 아이템을 추적한다
	void TraceForItem();

	//기본 무기 반환
	class AWeapon* SpawnDefaultWeapon();

	//무기를 장착하는 함수
	void EquipWeapon(AWeapon* WeaponToEquip , bool bSwaping =false);

	//아이템을 분리하고 분리된 아이템을 떨어뜨리는 함수
	void DropWeapon();

	void SelectButtonPressed();
	void SelectButtonReleased();

	//탄약맵을 초기화 한다
	void InitializeAmmoMap();

	//무기가 탄약이 있는지 체크하는 함수
	bool WeaponHasAmmo();

	//무기발사 관련 함수
	void PlayFireSound();
	void SendBullet();
	void PlayGunFireMontage();

	//리로드 키가 눌렸을때 바인딩 할 함수
	void ReloadButtonPressed();

	//리로드 함수
	void ReloadWeapon();

	//현재 들고있는 총의 탄약의 종류가 있는지 확인하는 함수
	bool CarryingAmmo();

	//Called from Animation Blueprint with Grab Clip notify
	UFUNCTION(BlueprintCallable)
	void GrabClip();

	//Called fromt Animation Blueprint with Release Clip notify
	UFUNCTION(BlueprintCallable)
	void ReleaseClip();

	void CrouchButtonPressed();

	virtual void Jump() override;

	//Interps capsule half height when crouching/standing
	void InterpCapsuleHalfHeight(float DeltaTime);

	void Aim();
	void StopAiming();

	void PickupAmmo(class AAmmo* Ammo);

	void initializeInterpLocation();

	void FKeyPressed();
	void OneKeyPressed();
	void TwoKeyPressed();
	void ThreeKeyPressed();
	void FourKeyPressed();
	void FiveKeyPressed();

	void ExchangeInventoryItem(int32 CurrentItemIndex, int32 NewItemIndex);

	int32 GetEmptyInventorySlot();

	void HighlightInventorySlot();
	
	UFUNCTION(BlueprintCallable)
	EPhysicalSurface GetSurfaceType();

	UFUNCTION(BlueprintCallable)
	void EndStun();

	void FPSChangeKeyPressed();
	void FPSChange(bool bChangeFPS);

	void Die();

	UFUNCTION(BlueprintCallable)
	void FinishDeath();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//현재 장착된 무기를 떨어뜨리고 바꾸려는 무기를 든다
	void SwapWeapon(AWeapon* WeaponToSwap);

private:
	/* Camera boom positioning the behind the character*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/*캐릭터를 따라다니는 카메라*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	// 기본 회전율 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float BaseTurnRate;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float BaseLookUpRate;

	//조준하지 않을때 회전율
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float HipTurnRate;

	//조준하지않을때
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float HipLookUpRate;

	//조준할때
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float AimingTurnRate;

	//조준할때
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float AimingLookUpRate;

	//조준하지 않을때 마우스의 감도
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseHipTurnRate;

	//조준하지 않을때 마우스의 감도
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"),meta =(ClampMin = "0.0", ClampMax = "1.0",UIMin = "0.0", UIMax = "1.0"))
	float MouseHipLookUpRate;

	//조준할때 마우스의 감도
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseAimingTurnRate;

	//조준할때 마우스의 감도
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"), meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MouseAimingLookUpRate;

	//무기 발사 애니메이션 몽타주
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* HipFireMontage;

	//총알 충돌시 생성되는 입자
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* ImpactParticles;

	//총알의 연기 흔적
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* BeamParticles;

	//에임버튼이 눌럿는가?
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	bool bAiming;

	//기본 카메라 시야값
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float CameraDefaultFOV;

	//줌했을때 카메라 시야값
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float CameraZoomedFOV;

	//지금 프레임에서의 카메라 뷰
	float CameraCurrentFOV;
	
	//줌할때 다가가는 속도
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = Combat, meta = (AllowPrivateAccess = "true"))
	float ZoomInterSpeed;

	//십자가의 퍼짐정도
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairSpreadMultiplier;

	//십자가의 퍼지는 정도의 값
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairVelocityFactor;

	//공중에서 십자가가 퍼지는 정도
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairInAirFactor;

	//조준했을때 십자가의 정도
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairAimFactor;
	
	//쏠때의 십자가의 퍼짐 정도
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float CrosshairShootingFactor;

	float ShootTimeDuration;
	bool bFiringBullet;
	FTimerHandle CrosshairShootTimer;

	//발사 버튼을 눌렀을때
	bool bFireButtonPressed;

	// 참일때는 발사 거짓일때는 타이머를 기다린다
	bool bShouldFire;


	//총발사 사이의 타이머
	FTimerHandle AutoFireTimer;

	//아이템 추적
	bool bShouldTraceForItems;
	
	//겹친 아이템 수
	int8 OverlappedItemCount;

	//마지막 프레임에서 얻은 아이템
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	class AItem* TraceHitItemLastFrame;

	//현재 장착된 무기
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = Combat, meta = (AllowPrivateAccess = "true"))
	AWeapon* EquippedWeapon;

	//블루프린트에 이것을 기본 무기로 사용
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AWeapon> DefaultWeaponClass;

	//추적중인 아이템(colud be null)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	AItem* TraceHitItem;

	//Distance outward from the camera for the interp distination
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	float CameraInterpDistance;
	
	// Distance upward from the camera for the interp distination
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	float CameraInterpElevtion;

	//Map to keep track of ammo of the different ammo type 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	TMap<EAmmoType, int32> AmmoMap;

	//Starting amount of 9mm ammo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Items, meta = (AllowPrivateAccess = "true")) 
	int32 Starting9mmAmmo;

	//Starting amount of AR ammo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Items, meta = (AllowPrivateAccess = "true"))
	int32 StartingARAmmo;

	//CombatState, can only fire or reload if Unoccupied
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	ECombatState CombatState;

	//Montage for reload animation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* ReloadMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* EquipMontage;

	UFUNCTION(BlueprintCallable)
	void FinishReloading();

	UFUNCTION(BlueprintCallable)
	void FinishEquipping();

	//Transeform fo the clip when we first grab the clip during reloading
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	FTransform ClipTransform;
	
	//Scene component to attach to the Character's hand during reloading
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	USceneComponent* HandSceneComponent;

	//true when crouching
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bCrouching;

	//Regular movement speed
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float BaseMovementSpeed;

	//Croch movemet speed

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float CrouchMovemnetSpeed;

	//Current half height of the Capsule
	float CurrentCapsuleHalfHeight;

	//Half heigh of the Capsule when not crouching
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float standingCapsuleHlfHeight;

	//Half height of the Capsule when crouching
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float CrouchingCapsuleHalfHeight;

	//Ground friction while not crouching
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float BaseGroundFriction;

	//Ground friction while crouching
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float CrouchGrouundFriction;

	//use for knowing when the aiming button is pressed
	bool bAimingButtonPressed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* WeaponInterpComp;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterComp2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterComp3;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterComp4;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterComp5;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* InterComp6;

	//Array of interp location struct
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<FInterpLocation> InterpLocation;

	FTimerHandle PickupSoundTimer;
	FTimerHandle EquipSoundTimer;

	bool bShouldPlayPickupSound;
	bool bShouldPlayEquipSound;

	void ResetPickupSoundTimer();
	void ResetEquipSoundTimer();

	//Time to wait before we can play another PickupSound
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	float PickupSoundResetTime;

	//Time to wait before we can play another EquipSound
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Items, meta = (AllowPrivateAccess = "true"))
	float EquipSoundResetTime;

	//Array of AItme for our Inventory
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	TArray<AItem*> Inventory;

	const int32 INVENTORY_CAPACITY{ 6 };

	//Delegate for sending slot information to InventoryBar when equipping
	UPROPERTY(BlueprintAssignable, Category = Delegate, meta = (AllowPrivateAccess = "true"))
	FEquipItemDelegate EquipItemDelegate;

	//Delegate for sending slot information for playing the icon animation
	UPROPERTY(BlueprintAssignable, Category = Delegate, meta = (AllowPrivateAccess = "true"))
	FHighlightIconDelegate HighlightIconDelegate;

	//the index for the currently highlighted slot
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	int32 HighlightedSlot;

	//Character Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float Health;

	//Character MaxHealth
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float MaxHealth;

	//Sound made when Character gets hit by a melee attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class USoundCue* MeleeImpactSound;

	//Blood splatter particles for melee hit
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* BloodParticles;

	//Hit react anim montage when character is stunned
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HitReactMontage;

	//Chance of being stunned when hit by an enemy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float StunChance;

	UPROPERTY(VisibleAnywhere, Category = Combat, meta = (AllowPrivateAccess = "true"))
	bool bChangeView;

	float FPSCameraLength;
	float TPSCameraLength;
	FVector FPSCameraLocation;
	FVector TPSCameraLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FPSFollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* FPSMeshComponen;

	//Montage for character Death
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* DeathMontage;
public:
	/*return CameraBoom subobject*/
	FORCEINLINE USpringArmComponent* GetCarmeraBoom() const { return CameraBoom; }

	/*카메라 반환, 카메라 게터*/
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	FORCEINLINE bool GetAiming() const { return bAiming; }

	UFUNCTION(BlueprintCallable)
	float GetCrosshairSpreadMultiplier() const;

	FORCEINLINE int8 GetOverlappedItemCount() const { return OverlappedItemCount; }

	//오버랩카운트를 더하거나 뺀다 그리고 bShouldTraceForItem을 업데이트 한다
	void IncrementOverlappedItemCount(int8 Amount);

	//AItem에 InterpLocaiton을 얻는 함수가 있어서 더이상 필요 없음
	//FVector GetCameraInterpLocation();

	void GetPickupItem(AItem* Item);

	FORCEINLINE ECombatState GetCombatState() const { return CombatState; }

	FORCEINLINE bool GetCrouching() const { return bCrouching; }

	FInterpLocation GetInterpLocation(int32 Index);

	//가장 작은 인덱스를 반환한다
	int32 GetInterpLocationIndex();

	void IncrementInterpLocItemCount(int32 Index, int32 Amount);

	FORCEINLINE bool ShouldPlayPickupSound()const { return bShouldPlayPickupSound; }


	FORCEINLINE bool ShouldPlayEquipSound()const { return bShouldPlayEquipSound; }

	void StartPickupSoundTiemr();
	void StartEquipSoundTiemr();

	void UnHighlightInventorySlot();

	FORCEINLINE AWeapon* GetEquippedWeapon()const { return EquippedWeapon; }
	FORCEINLINE USoundCue* GetMeleeImpactSound() const { return MeleeImpactSound; }
	FORCEINLINE UParticleSystem* GetBloodParticles() const{ return BloodParticles; }

	void Stun();
	FORCEINLINE float GetStunChance() const { return StunChance; }
};
