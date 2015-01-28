// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphSchema.h"
#include "CreateNewObject.generated.h"

UCLASS()
class UCreateNewObject : public UEdGraphNode
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintPure, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Create Object From Blueprint", CompactNodeTitle = "Create", Keywords = "new create blueprint"), Category = Game)
		static UObject* NewObjectFromBlueprint(UObject* WorldContextObject, TSubclassOf<UObject> UC);
};