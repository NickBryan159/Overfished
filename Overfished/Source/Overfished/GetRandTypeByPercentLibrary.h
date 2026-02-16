// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetRandTypeByPercentLibrary.generated.h"

/**
 * 
 */
UCLASS()
class OVERFISHED_API UGetRandTypeByPercentLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Overfished|GetRandTypeByPercentLibrary")
	static int32 GetRandTypeByPercent(float BFPercent, float SilverFPercent, float TFPercent, float ShadowFPercent);
};
