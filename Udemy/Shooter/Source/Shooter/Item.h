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

	//��ħ�� �߻������� �ҷ����� �Լ�
	UFUNCTION()
	void OnSphereOverlap(UPrimitiveComponent* OverlapComponent,
		AActor * OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OterBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);
	
	//��ħ�� �������� �ҷ����� �Լ�
	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OterBodyIndex);

	//��͵��� �������� ������ �� Ȱ��ȭ �ϱ� ���� �Լ�
	void SetActiveStars();

	//���¿� ���� �������� �Ӽ��� ���� 
	void SetItemProperties(EItemState State);

	//Called when ItemInterpTimer is finished
	void FinishInterping();

	//������ ȹ���ϴ� �������� ����ȿ�� �ֱ�
	void ItemInterp(float DeltaTime);
public:	
	// Called every frame 
	virtual void Tick(float DeltaTime) override;

private:
	//�����ۿ� ���� ���̷��� �޽�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* ItemMesh;

	//Line trace collides with box to show HUD widgets
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;

	//�÷��̾ �������� ���� �˾����� ���� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* PickupWidget;

	//������ ��ĥ�� ���� Ȱ��ȭ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* AreaSphere;

	//������ ������ ������ �̸�
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	FString ItemName;

	//������ ī��Ʈ(�Ѿ˼�,���)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	int32 ItemCount;

	// ������ ��͵� - ������ ���� �����ϱ����� �ʿ�
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	EItemRarity ItemRarity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	TArray<bool> ActiveStars;

	//������ ���� ����
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

	//Inital Yaw offset between the camera and the interping item
	float InterpInitalYawOffset;

	//�������� ũ�渣 �����ϴ� Ŀ��
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ItemProperties, meta = (AllowPrivateAccess = "true"))
	UCurveFloat* ItemScaleCurve;
public:
	FORCEINLINE UWidgetComponent* GetPickupWidget() const { return PickupWidget; }
	FORCEINLINE USphereComponent* GetAreaSphere() const { return AreaSphere; }
	FORCEINLINE UBoxComponent* GetCollisionBox() const { return CollisionBox; }
	FORCEINLINE EItemState GetItemState()const { return ItemState; }
	void SetItemState(EItemState State);
	FORCEINLINE USkeletalMeshComponent* GetItemMesh() const { return ItemMesh; }

	//Called from the ShooterCharacter
	void StartItemCurve(AShooterCharacter* Char);
};
