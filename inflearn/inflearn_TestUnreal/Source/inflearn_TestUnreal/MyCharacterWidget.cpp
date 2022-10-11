// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterWidget.h"
#include "MyStatComponent.h"
#include "Components/ProgressBar.h"

void UMyCharacterWidget::BindHP(UMyStatComponent* StatComp)
{
	CurrentStatComp = StatComp;
	StatComp->OnHpChanged.AddUObject(this, &UMyCharacterWidget::UpDateHP);

}

void UMyCharacterWidget::UpDateHP()
{
	if (CurrentStatComp.IsValid())
	{
		PB_HPBar->SetPercent(CurrentStatComp->GetHpRatio());
	}
	
}
