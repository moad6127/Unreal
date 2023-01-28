// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"
#include "Components/SphereComponent.h"
#include "ShooterCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
// Sets default values
AHealth::AHealth() : 
	HealingAmount(20.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HealthMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(HealthMesh);

	HealthOverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapShpere"));
	HealthOverlapSphere->SetupAttachment(HealthMesh);
}

// Called when the game starts or when spawned
void AHealth::BeginPlay()
{
	Super::BeginPlay();
	HealthOverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AHealth::CombatRangeOverlap);
}

void AHealth::CombatRangeOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OterBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == nullptr)
	{
		return;
	}
	auto ShooterCharacter = Cast<AShooterCharacter>(OtherActor);
	if (ShooterCharacter)
	{
		float Value{ ShooterCharacter->GetHealth() };
		ShooterCharacter->SetHealth(Value + HealingAmount);
		if (PickupSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, PickupSound, GetActorLocation());
		}

		Destroy();
	}

}

// Called every frame
void AHealth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

