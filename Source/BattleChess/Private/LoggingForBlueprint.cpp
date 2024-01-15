// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine.h" 
#include "LoggingForBlueprint.h"


bool UOmniBlueprintFunctionLibrary::FileSaveString(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool UOmniBlueprintFunctionLibrary::FileLoadString(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}
