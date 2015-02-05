// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */

#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphSchema.h"
#include "CutFloat.generated.h"
UCLASS()
class UCutFloat : public  UEdGraphNode
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintPure, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Cut Float Decimals", CompactNodeTitle = "Math", Keywords = "cut float decimal"), Category = Game)
	static float CutFloat(float value, uint8 decimals);

	UFUNCTION(BlueprintPure, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Get Float As String With Precision", CompactNodeTitle = "Math", Keywords = "cut float decimal string"), Category = Game)
	static FString GetFloatAsStringWithPrecision(float value, uint8 decimals);
};
