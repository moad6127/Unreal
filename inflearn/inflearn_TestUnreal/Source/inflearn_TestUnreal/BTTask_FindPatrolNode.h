// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindPatrolNode.generated.h"

/**
 * 
 */
UCLASS()
class INFLEARN_TESTUNREAL_API UBTTask_FindPatrolNode : public UBTTaskNode
{
	GENERATED_BODY()
	

public:
	UBTTask_FindPatrolNode();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
