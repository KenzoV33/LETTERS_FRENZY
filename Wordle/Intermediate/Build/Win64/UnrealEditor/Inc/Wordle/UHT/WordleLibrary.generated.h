// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WordleLibrary.h"

#ifdef WORDLE_WordleLibrary_generated_h
#error "WordleLibrary.generated.h already included, missing '#pragma once' in WordleLibrary.h"
#endif
#define WORDLE_WordleLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FstringArray;

// ********** Begin ScriptStruct FstringArray ******************************************************
struct Z_Construct_UScriptStruct_FstringArray_Statics;
#define FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FstringArray_Statics; \
	WORDLE_API static class UScriptStruct* StaticStruct();


struct FstringArray;
// ********** End ScriptStruct FstringArray ********************************************************

// ********** Begin Class UWordleLibrary ***********************************************************
#define FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLetter); \
	DECLARE_FUNCTION(execLoadWordsFromFile);


struct Z_Construct_UClass_UWordleLibrary_Statics;
WORDLE_API UClass* Z_Construct_UClass_UWordleLibrary_NoRegister();

#define FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWordleLibrary(); \
	friend struct ::Z_Construct_UClass_UWordleLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORDLE_API UClass* ::Z_Construct_UClass_UWordleLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWordleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Wordle"), Z_Construct_UClass_UWordleLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWordleLibrary)


#define FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWordleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWordleLibrary(UWordleLibrary&&) = delete; \
	UWordleLibrary(const UWordleLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWordleLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWordleLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWordleLibrary) \
	NO_API virtual ~UWordleLibrary();


#define FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h_19_PROLOG
#define FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWordleLibrary;

// ********** End Class UWordleLibrary *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
