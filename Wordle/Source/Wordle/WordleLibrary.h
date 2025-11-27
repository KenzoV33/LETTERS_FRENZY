// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WordleLibrary.generated.h"

USTRUCT(BlueprintType)
struct FstringArray
{
	GENERATED_BODY();

	UPROPERTY(BlueprintReadOnly)
	TArray<FString> Strings;
};


UCLASS()

class WORDLE_API UWordleLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "WordleLibrary")
	static bool LoadWordsFromFile(FString FileName, int32 RequiredWordLength, TMap<int32, FstringArray>& Words);
	
	
	UFUNCTION(BlueprintCallable, Category = "WordleLibrary")
	static bool IsLetter(FString String);

};
