// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "DeviceProfiles/DeviceProfileManager.h"
#include "DeviceProfiles/DeviceProfile.h"
#include "DeviceManager.generated.h"

/**
 * 
 */
UCLASS()
class PCBENCHMARK_API ADeviceManager : public AActor
{
	GENERATED_UCLASS_BODY()

	//	UFUNCTION(BlueprintCallable, Category = "PlayerHealth")
	//	FString GetGPUName()
	//{
	//	TArray<FString>& arr = GEngine->GetDeviceProfileManager()->GetActiveProfile()->CVars;

	//	for (int i = 0; i < arr.Num(); ++i)
	//	{
	//		if (GEngine)
	//		{
	//			FString namez = arr[i];
	//			GEngine->AddOnScreenDebugMessage(0, 1000.0f, FColor::Red, namez);
	//			//UE_LOG(LogClass, Log, TEXT(namez));
	//		}
	//	}
	//	return arr[0];
	//};
};
