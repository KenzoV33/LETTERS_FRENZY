// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wordle/WordleLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWordleLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Wordle();
WORDLE_API UClass* Z_Construct_UClass_UWordleLibrary();
WORDLE_API UClass* Z_Construct_UClass_UWordleLibrary_NoRegister();
WORDLE_API UScriptStruct* Z_Construct_UScriptStruct_FstringArray();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FstringArray ******************************************************
struct Z_Construct_UScriptStruct_FstringArray_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FstringArray); }
	static inline consteval int16 GetStructAlignment() { return alignof(FstringArray); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WordleLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[] = {
		{ "Category", "stringArray" },
		{ "ModuleRelativePath", "WordleLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FstringArray constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Strings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Strings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FstringArray constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FstringArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FstringArray_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FstringArray;
class UScriptStruct* FstringArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FstringArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FstringArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FstringArray, (UObject*)Z_Construct_UPackage__Script_Wordle(), TEXT("stringArray"));
	}
	return Z_Registration_Info_UScriptStruct_FstringArray.OuterSingleton;
	}

// ********** Begin ScriptStruct FstringArray Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FstringArray_Statics::NewProp_Strings_Inner = { "Strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FstringArray_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FstringArray, Strings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strings_MetaData), NewProp_Strings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FstringArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstringArray_Statics::NewProp_Strings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FstringArray_Statics::NewProp_Strings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FstringArray_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FstringArray Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FstringArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Wordle,
	nullptr,
	&NewStructOps,
	"stringArray",
	Z_Construct_UScriptStruct_FstringArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FstringArray_Statics::PropPointers),
	sizeof(FstringArray),
	alignof(FstringArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FstringArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FstringArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FstringArray()
{
	if (!Z_Registration_Info_UScriptStruct_FstringArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FstringArray.InnerSingleton, Z_Construct_UScriptStruct_FstringArray_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FstringArray.InnerSingleton);
}
// ********** End ScriptStruct FstringArray ********************************************************

// ********** Begin Class UWordleLibrary Function IsLetter *****************************************
struct Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics
{
	struct WordleLibrary_eventIsLetter_Parms
	{
		FString String;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WordleLibrary" },
		{ "ModuleRelativePath", "WordleLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsLetter constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLetter constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLetter Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WordleLibrary_eventIsLetter_Parms, String), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WordleLibrary_eventIsLetter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WordleLibrary_eventIsLetter_Parms), &Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::PropPointers) < 2048);
// ********** End Function IsLetter Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWordleLibrary, nullptr, "IsLetter", 	Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::WordleLibrary_eventIsLetter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::WordleLibrary_eventIsLetter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWordleLibrary_IsLetter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWordleLibrary_IsLetter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWordleLibrary::execIsLetter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWordleLibrary::IsLetter(Z_Param_String);
	P_NATIVE_END;
}
// ********** End Class UWordleLibrary Function IsLetter *******************************************

// ********** Begin Class UWordleLibrary Function LoadWordsFromFile ********************************
struct Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics
{
	struct WordleLibrary_eventLoadWordsFromFile_Parms
	{
		FString FileName;
		int32 RequiredWordLength;
		TMap<int32,FstringArray> Words;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WordleLibrary" },
		{ "ModuleRelativePath", "WordleLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadWordsFromFile constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredWordLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Words_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Words_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Words;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadWordsFromFile constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadWordsFromFile Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WordleLibrary_eventLoadWordsFromFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_RequiredWordLength = { "RequiredWordLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WordleLibrary_eventLoadWordsFromFile_Parms, RequiredWordLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_Words_ValueProp = { "Words", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FstringArray, METADATA_PARAMS(0, nullptr) }; // 1838676407
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_Words_Key_KeyProp = { "Words_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_Words = { "Words", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WordleLibrary_eventLoadWordsFromFile_Parms, Words), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1838676407
void Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WordleLibrary_eventLoadWordsFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WordleLibrary_eventLoadWordsFromFile_Parms), &Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_RequiredWordLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_Words_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_Words_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_Words,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::PropPointers) < 2048);
// ********** End Function LoadWordsFromFile Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWordleLibrary, nullptr, "LoadWordsFromFile", 	Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::WordleLibrary_eventLoadWordsFromFile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::WordleLibrary_eventLoadWordsFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWordleLibrary::execLoadWordsFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FIntProperty,Z_Param_RequiredWordLength);
	P_GET_TMAP_REF(int32,FstringArray,Z_Param_Out_Words);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWordleLibrary::LoadWordsFromFile(Z_Param_FileName,Z_Param_RequiredWordLength,Z_Param_Out_Words);
	P_NATIVE_END;
}
// ********** End Class UWordleLibrary Function LoadWordsFromFile **********************************

// ********** Begin Class UWordleLibrary ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWordleLibrary;
UClass* UWordleLibrary::GetPrivateStaticClass()
{
	using TClass = UWordleLibrary;
	if (!Z_Registration_Info_UClass_UWordleLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WordleLibrary"),
			Z_Registration_Info_UClass_UWordleLibrary.InnerSingleton,
			StaticRegisterNativesUWordleLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWordleLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UWordleLibrary_NoRegister()
{
	return UWordleLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWordleLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WordleLibrary.h" },
		{ "ModuleRelativePath", "WordleLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWordleLibrary constinit property declarations ***************************
// ********** End Class UWordleLibrary constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsLetter"), .Pointer = &UWordleLibrary::execIsLetter },
		{ .NameUTF8 = UTF8TEXT("LoadWordsFromFile"), .Pointer = &UWordleLibrary::execLoadWordsFromFile },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWordleLibrary_IsLetter, "IsLetter" }, // 4002889362
		{ &Z_Construct_UFunction_UWordleLibrary_LoadWordsFromFile, "LoadWordsFromFile" }, // 99566913
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWordleLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWordleLibrary_Statics
UObject* (*const Z_Construct_UClass_UWordleLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Wordle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWordleLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWordleLibrary_Statics::ClassParams = {
	&UWordleLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWordleLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWordleLibrary_Statics::Class_MetaDataParams)
};
void UWordleLibrary::StaticRegisterNativesUWordleLibrary()
{
	UClass* Class = UWordleLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWordleLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWordleLibrary()
{
	if (!Z_Registration_Info_UClass_UWordleLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWordleLibrary.OuterSingleton, Z_Construct_UClass_UWordleLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWordleLibrary.OuterSingleton;
}
UWordleLibrary::UWordleLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWordleLibrary);
UWordleLibrary::~UWordleLibrary() {}
// ********** End Class UWordleLibrary *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h__Script_Wordle_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FstringArray::StaticStruct, Z_Construct_UScriptStruct_FstringArray_Statics::NewStructOps, TEXT("stringArray"),&Z_Registration_Info_UScriptStruct_FstringArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FstringArray), 1838676407U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWordleLibrary, UWordleLibrary::StaticClass, TEXT("UWordleLibrary"), &Z_Registration_Info_UClass_UWordleLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWordleLibrary), 3448920362U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h__Script_Wordle_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h__Script_Wordle_1591757962{
	TEXT("/Script/Wordle"),
	Z_CompiledInDeferFile_FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h__Script_Wordle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h__Script_Wordle_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h__Script_Wordle_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kenzo_Documents_GitHub_LETTERS_FRENZY_Wordle_Source_Wordle_WordleLibrary_h__Script_Wordle_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
