// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyCharacterWidget.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_TESTUNREAL_API UMyCharacterWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void BindHP(class UMyStatComponent* StatComp);
	void UpDateHP();
private:

	TWeakObjectPtr<class UMyStatComponent> CurrentStatComp;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* PB_HPBar;


};
