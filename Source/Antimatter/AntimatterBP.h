// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AntimatterBP.generated.h"

/**
 * 
 */
UCLASS()
class ANTIMATTER_API UAntimatterBP : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "AntimatterBP")
	static AActor* GetNearestActorWithout(const FVector& Target, const TArray<AActor*>& Actors, const AActor* Without);
};
