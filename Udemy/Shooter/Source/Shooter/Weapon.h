// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "AmmoType.h"
#include "Engine/DataTable.h"
#include "Weapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_SubmachineGun UMETA(DisplayName = "SubmachineGun"),
	EWT_AssaultRifle UMETA(DisplayName = "AssaultRifle"),

	EWT_MAX UMETA(DisplayName = "DefaultMAX")
};

USTRUCT(BlueprintType)
struct FWeaponDataTable : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAmmoType AmmoType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WeaponAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MagazingCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue* PickupSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundCue* EquipSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetComponent* PickupWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh* ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* InventoryIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* AmmoIcon;
};
	/**
 * 
 */


UCLASS()
class SHOOTER_API AWeapon : public AItem
{
	GENERATED_BODY()
public:
	AWeapon();

	virtual void Tick(float DeltaTime) override;
protected:

	void StopFalling();
private:
	FTimerHandle ThrowWeaponTimer;
	float ThrowWeaponTime;
	bool bFalling;

	//Ammo count for this weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponProperties, meta = (AllowPrivateAccess = "true"))
	int32 Ammo;

	//Maximum ammo that our weapon can hold
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponProperties, meta = (AllowPrivateAccess = "true"))
	int32 MagazineCapacity;

	//the type of weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponProperties, meta = (AllowPrivateAccess = "true"))
	EWeaponType WeaponType;

	//the type of Ammo for this weapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponProperties, meta = (AllowPrivateAccess = "true"))
	EAmmoType AmmoType;

	//������ ��Ÿ�ָ� ���ؼ� FName���� ������ �����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponProperties, meta = (AllowPrivateAccess = "true"))
	FName ReloadMontageSection;

	//True when moving the Clip while reloading
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = WeaponProperties, meta = (AllowPrivateAccess = "true"))
	bool bMovingClip;

	//Name for the clip bone
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponProperties, meta = (AllowPrivateAccess = "true"))
	FName ClipBoneName;

	//DataTable for weapon properties
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = DataTable, meta = (AllowPrivateAccess = "true"))
	UDataTable* WeaponDataTable;
public:

	void ThrowWeapon();

	FORCEINLINE int32 GetAmmo()const { return Ammo; }

	FORCEINLINE int32 GetMagazineCapacity()const { return MagazineCapacity; }

	// ĳ����Ŭ�������� ���⸦ �߻��Ҷ� ȣ��ȴ�
	void DecrementAmmo();

	FORCEINLINE EWeaponType GetWeaponType() const { return WeaponType; }
	FORCEINLINE EAmmoType GetAmmoType() const { return AmmoType; }
	FORCEINLINE FName GetReloadMontageSection() const { return ReloadMontageSection; }
	FORCEINLINE FName GetClipBoneName() const { return ClipBoneName; }

	void ReloadAmmo(int32 Amount);

	FORCEINLINE void SetMovingClip(bool Move) { bMovingClip = Move; }


	bool ClipIsFull();
};
