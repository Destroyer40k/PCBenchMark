// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TestResults.h"
#include "PhysicsTestResults.generated.h"

/**
 * 
 */
UCLASS()
class PCBENCHMARK_API UPhysicsTestResults : public UTestResults
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(BlueprintReadWrite, Category = Basic)
		int32 BoxCount;
	
};
