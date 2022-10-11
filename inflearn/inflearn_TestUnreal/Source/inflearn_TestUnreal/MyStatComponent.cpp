// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStatComponent.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UMyStatComponent::UMyStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;
	// ...
	Level = 1;
}


// Called when the game starts
void UMyStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UMyStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetLevel(Level);
}

void UMyStatComponent::SetLevel(int32 NewLevel)
{
	auto MyGameInstance = Cast<UMyGameInstance>( UGameplayStatics::GetGameInstance(GetWorld()));
	if (MyGameInstance)
	{
		auto StatData = MyGameInstance->GetStatData(NewLevel);
		if (StatData)
		{
			Level = StatData->Level;
			SetHP(StatData->MaxHP);
			MaxHP = StatData->MaxHP;
			Attack = StatData->Attack;
		}
	}
}

void UMyStatComponent::SetHP(int32 NewHP)
{
	HP = NewHP;
	if (HP < 0)
	{
		HP = 0;
	}

	OnHpChanged.Broadcast();
}

void UMyStatComponent::OnAttack(float DamegeAmount)
{
	int32 NewHP = HP - DamegeAmount;
	SetHP(NewHP);
	//UE_LOG(LogTemp, Warning, TEXT("OnAttack %d"), HP);
}



