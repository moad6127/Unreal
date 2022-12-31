// Fill out your copyright notice in the Description page of Project Settings.


#include "Myweapon.h"
#include "Components/BoxComponent.h"
#include "MyCharacter.h"

// Sets default values
AMyweapon::AMyweapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	
	Weapon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WEAPON"));
	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TRIGGER"));



	static ConstructorHelpers::FObjectFinder<UStaticMesh> SW(TEXT("StaticMesh'/Game/ParagonMurdock/FX/Meshes/Shells/SM_PlasmaShot_Shell.SM_PlasmaShot_Shell'"));
	if (SW.Succeeded())
	{
		Weapon->SetStaticMesh(SW.Object);
	}

	Weapon->SetupAttachment(RootComponent);
	Trigger->SetupAttachment(Weapon);



	Weapon->SetCollisionProfileName(TEXT("MyCollectible"));
	Trigger->SetCollisionProfileName(TEXT("MyCollectible"));

	Trigger->SetBoxExtent(FVector(30.f, 30.f, 30.f));
 
}

// Called when the game starts or when spawned
void AMyweapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyweapon::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	Trigger->OnComponentBeginOverlap.AddDynamic(this, &AMyweapon::OnCharacterOverlap);
}

void AMyweapon::OnCharacterOverlap(UPrimitiveComponent* OverlappendComp, AActor* OtherActer, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("OverLapped"));

	AMyCharacter* MyCharacter = Cast<AMyCharacter>(OtherActer);
	if (MyCharacter)
	{
		FName WeaponSocket(TEXT("hand_l_socket"));
		
		AttachToComponent(MyCharacter-> GetMesh(),
		FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocket);
		
	}
}


