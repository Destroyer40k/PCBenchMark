// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"

#include "DemoTestResults.h"
#include "PhysicsTestResults.h"
#include "ScoreCalculator.generated.h"


/**
 * 
 */
UCLASS()
class PCBENCHMARK_API AScoreCalculator : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintReadWrite, Category = Basic)
	UDemoTestResults* DemoTestResults;

	UPROPERTY(BlueprintReadWrite, Category = Basic)
	UPhysicsTestResults* PhysicsTestResults;
	
	
	UFUNCTION(BlueprintCallable, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Calculate Demo Score", CompactNodeTitle = "Score", Keywords = "calculate demo score"), Category = Game)
	int32 calculateDemoScore();

	UFUNCTION(BlueprintCallable, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Calculate Physics Score", CompactNodeTitle = "Score", Keywords = "calculate physics score"), Category = Game)
	int32 calculatePhysicsScore();

};
