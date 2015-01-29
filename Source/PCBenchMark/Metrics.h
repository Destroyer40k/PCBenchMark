// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Engine.h"
#include "Metrics.generated.h"

/**
 * 
 */
UCLASS()
class PCBENCHMARK_API AMetrics : public AActor
{
	GENERATED_UCLASS_BODY()


		UFUNCTION()
		float getPhysicsTime();
};
