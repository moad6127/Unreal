// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon.generated.h"

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

public:

	void ThrowWeapon();

	FORCEINLINE int32 GetAmmo()const { return Ammo; }

	// 캐릭터클래스에서 무기를 발사할때 호출된다
	void DecrementAmmo();
};
