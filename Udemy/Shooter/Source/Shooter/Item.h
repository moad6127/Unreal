// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	EIR_Damaged UMETA(DisplayName = "Damaged"),
	EIR_Common UMETA(DisplayName = "Common"),
	EIR_Uncommon UMETA(DisplayName = "Uncommon"),
	EIR_Rare UMETA(DisplayName = "Rare"),
	EIR_Legendary UMETA(DisplayName = "Legendary"),

	EIR_MAX UMETA(DisplayName = "DefaultMAX"),

};
UENUM(BlueprintType)
enum class EItemState : uint8
{
	EIS_Pickup UMETA(DisplayName = "Pickup"),
	EIS_EquipInterping UMETA(DisplayName = "EquipInterping"),
	EIS_PickedUp UMETA(DisplayName = "PickedUp"),
	EIS_Equipped UMETA(DisplayName = "Equipped"),
	EIS_Falling UMETA(DisplayName = "Falling"),


	EIS_MAX UMETA(DisplayName = "DefaultMAX"),

};
UENUM(BlueprintType)
enum class EItemType : uint8
{
	EIT_Ammo UMETA(DisplayName = "Ammo"),
	EIT_Weapon UMETA(DisplayName = "Weapon"),

	EIT_MAX UMETA(DisplayName = "DefaultMAX")
};

UCLASS()
class SHOOTER_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//겹침이 발생했을때 불려지는 함수
	UFUNCTION()
	void OnSphereOverlap(UPrimitiveComponent* OverlapComponent,
		AActor * OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OterBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
	
	//겹침이 끝났을때 불려지는 함수
	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OterBodyIndex);

	//희귀도를 바탕으로 위젯의 별 활성화 하기 위한 함수
	void SetActiveStars();

	//상태에 따라 아이템의 속성을 설정 
	virtual void SetItemProperties(EItemState State);

	//Called when ItemInterpTimer is finished
	void FinishInterping();

	//아이템 획득하는 과정에서 강조효과 넣기
	void ItemInterp(float DeltaTime);

	//Interp위치를 아이템 타입에 따라 정하고 얻는함수
	FVector GetInterpLocation();

	void PlayPickupSound(bool bForcePlaySound = false);

	virtual void InitalizeCustomDepth();

	virtual void OnConstruction(const FTransform& Transform) override;

	void EnableGlowMeterial();

	void UpdatePulse();

	void ResetPulseTimer();
	void StartPulseTimer();

public:	
	// Called every frame 
	virtual void Tick(float DeltaTime) override;

	//Called in AShooterCharacter
	void PlayEquipSound(bool bForcePlaySound = false);
private:
	//아이템에 대한 스켈레톤 메쉬
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* ItemMesh;

	//Line trace collides with box to show HUD widgets
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;

	//플레이어가 아이템을 볼때 팝업으로 띄우기 위해 선언
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* PickupWidget;

	//추적이 겹칠때 추적 활성화
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* AreaSphere;

	//위젯에 나오는 아이템 이름
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	FString ItemName;

	//아이템 카운트(총알수,등등)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	int32 ItemCount;

	// 아이템 희귀도 - 위젯의 별을 설정하기위해 필요
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	EItemRarity ItemRarity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	TArray<bool> ActiveStars;

	//아이템 현재 상태
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	EItemState ItemState;

	//the curve asset to use ofr the item's Z location when interping
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class UCurveFloat* ItemZCurve;

	//Starting Location whit interping begins
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	FVector ItemIterpStartLocation;

	//Target interp location in front of the camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	FVector CameraTargetLocation;

	//true when interping
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	bool bInterping;

	//Plays when we Start interping
	FTimerHandle ItemInterpTimer;

	//Duration of ther curve and Timer
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	float ZCurveTime;

	//pointer to the character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class AShooterCharacter* Character;

	//X and Y for the Item while interping in the EquipInterping state;
	float ItemInterpX;
	float ItemInterpY;

	//Inital Yaw offset between the camera and the Finterping item
	float InterpInitalYawOffset;

	//아이템의 크길르 조절하는 커브
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	UCurveFloat* ItemScaleCurve;

	//Sound played when Item is pickuped up
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class USoundCue* PickupSound;

	//Sound played when Item is equipped
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	USoundCue* EquipSound;

	//Enum for the type of item this item is
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	EItemType ItemType;

	//Index of the Interp location this item is interping to
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	int32 InterpLocIndex;

	//Index for the material We'd like to change at runtime
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	int32 MaterialIndex;

	//Dynamic Instance that we can change at runtime
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	UMaterialInstanceDynamic* DynamicMaterialInstance;

	//material inscance used with the Dynamic Material Instance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	UMaterialInstance* MaterialInstance;

	bool bCanChangeCustomDepth;

	//Curve to drive the dynamic material parameters 
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class UCurveVector* PulseCurve;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class UCurveVector* InterpPulseCurve;

	FTimerHandle PulseTimer;

	//Time for the PulseTimer
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	float PulseCurveTime;

	UPROPERTY(VisibleAnywhere, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	float GlowAmount;

	UPROPERTY(VisibleAnywhere, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	float FresnelExponent;

	UPROPERTY(VisibleAnywhere, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	float FresnelReflectFraction;

	//Background for this itme in the inventory
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	UTexture2D* IconBackground;

	//Icon for this itme in the inventory
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	UTexture2D* IconItem;

	//Ammo Icon for this itme in the inventory
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	UTexture2D* AmmoItem;

	//Slot in the inventory array
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	int32 SlotIndex;

public:
	FORCEINLINE UWidgetComponent* GetPickupWidget() const { return PickupWidget; }
	FORCEINLINE USphereComponent* GetAreaSphere() const { return AreaSphere; }
	FORCEINLINE UBoxComponent* GetCollisionBox() const { return CollisionBox; }
	FORCEINLINE EItemState GetItemState()const { return ItemState; }
	void SetItemState(EItemState State);
	FORCEINLINE USkeletalMeshComponent* GetItemMesh() const { return ItemMesh; }
	FORCEINLINE USoundCue* GetPickupSound() const { return PickupSound; }
	FORCEINLINE USoundCue* GetEquipSound() const { return EquipSound; }
	FORCEINLINE int32 GetItmeCount() const { return ItemCount; }

	FORCEINLINE int32 GetSlotIndex()const { return SlotIndex; }
	FORCEINLINE void SetSlotIndex(int32 Index) { SlotIndex = Index; }

	FORCEINLINE void SetCharacter(AShooterCharacter* Char) { Character = Char; }

	//Called from the ShooterCharacter
	void StartItemCurve(AShooterCharacter* Char,bool bForcePlaySound = false);

	virtual void EnableCustomDepth();
	virtual void DisableCustomDepth();

	void DisableGlowMeterial();
};
