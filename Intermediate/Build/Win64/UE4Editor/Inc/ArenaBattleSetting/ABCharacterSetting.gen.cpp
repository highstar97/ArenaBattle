// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattleSetting/Public/ABCharacterSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterSetting() {}
// Cross Module References
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister();
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UABCharacterSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ArenaBattleSetting();
// End Cross Module References
	void UABCharacterSetting::StaticRegisterNativesUABCharacterSetting()
	{
	}
	UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister()
	{
		return UABCharacterSetting::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattleSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABCharacterSetting.h" },
		{ "ModuleRelativePath", "Public/ABCharacterSetting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterSetting_Statics::ClassParams = {
		&UABCharacterSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCharacterSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABCharacterSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABCharacterSetting, 2153793290);
	template<> ARENABATTLESETTING_API UClass* StaticClass<UABCharacterSetting>()
	{
		return UABCharacterSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABCharacterSetting(Z_Construct_UClass_UABCharacterSetting, &UABCharacterSetting::StaticClass, TEXT("/Script/ArenaBattleSetting"), TEXT("UABCharacterSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
