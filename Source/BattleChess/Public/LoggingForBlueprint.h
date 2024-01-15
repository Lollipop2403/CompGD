// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Engine.h" 
#include "LoggingForBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class BATTLECHESS_API ULoggingForBlueprint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Save")
	static bool FileSaveString(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintPure, Category = "Save")
	static bool FileLoadString(FString FileNameA, FString& SaveTextA);
};
