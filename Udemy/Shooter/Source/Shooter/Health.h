// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Health.generated.h"

UCLASS()
class SHOOTER_API AHealth : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void CombatRangeOverlap(UPrimitiveComponent* OverlapComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OterBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult);
private:

	//Mesh for Explosive
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* HealthMesh;

	// Used to determin what actors overlap during explosion
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* HealthOverlapSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class USoundCue* PickupSound;

	float HealingAmount;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
