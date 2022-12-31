// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyStudyGameModeBase.h"
#include "Blueprint/UserWidget.h"

void AMyStudyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidget);
	CurrentWidget->AddToViewport();
}
