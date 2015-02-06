// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/SaveGame.h"
#include "TestResults.generated.h"

/**
 * 
 */
UCLASS()
class PCBENCHMARK_API UTestResults : public USaveGame
{
	GENERATED_UCLASS_BODY()


	UPROPERTY(BlueprintReadWrite, Category = Basic)
	int32 FrameCount;

	UPROPERTY(BlueprintReadWrite, Category = Basic)
	float MinFPS;

	UPROPERTY(BlueprintReadWrite, Category = Basic)
	float MaxFPS;

	UPROPERTY(BlueprintReadWrite, Category = Basic)
	float AvgFPS;

	UPROPERTY(BlueprintReadWrite, Category = Basic)
	float Duration;
	
};
