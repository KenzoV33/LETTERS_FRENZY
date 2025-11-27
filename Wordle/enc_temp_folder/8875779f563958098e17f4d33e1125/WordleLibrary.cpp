// Fill out your copyright notice in the Description page of Project Settings.


#include "WordleLibrary.h"
#include "Kismet/kismetStringLibrary.h"
static bool IsASCITLetter(char c)
{
	return (c >= 65 && c <= 90);
}


bool UWordleLibrary::LoadWordsFromFile(FString FileName, int32 RequiredWordLength, TMap<int32, FstringArray>& Words)
{
	FString parsedText;
	if (FFileHelper::LoadFileToString(parsedText, *(FPaths::ProjectContentDir() + FileName)) == false)
		return false;


	TArray<FString> parsedWords = UKismetStringLibrary::ParseIntoArray(parsedText, "\n");

	for (FString& word : parsedWords)
	{
		if (word.Len() < RequiredWordLength)
			continue;

		word.ToUpperInline();
	
		bool containsOnlyValidCharacter = true;
		for (const auto& letter : word.GetCharArray())
		{
			if (letter != '\0' && IsASCITLetter(letter) == false)
			{
				containsOnlyValidCharacter = false;
				break;
			}
		}

		if (containsOnlyValidCharacter == true)
			Words.FindOrAdd(word.Len()).Strings.Add(word);
	
	}
	return true;

	 
}

bool UWordleLibrary::IsLetter(FString String)
{
	if (String.Len() != 1)
		return false;

	return IsASCITLetter(String.ToUpper().GetCharArray()[0]);
}