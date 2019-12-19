// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HAL/FileManagerGeneric.h"
#include "MyfunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RUNNER_API UMyfunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BLueprintCallable, Category = "Files")
		static TArray<FString> FindFiles(FString Directory, FString extension);
	
};
