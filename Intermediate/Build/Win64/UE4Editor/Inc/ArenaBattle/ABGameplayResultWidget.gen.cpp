// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABGameplayResultWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameplayResultWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayResultWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayResultWidget();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameplayWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABGameplayResultWidget::StaticRegisterNativesUABGameplayResultWidget()
	{
	}
	UClass* Z_Construct_UClass_UABGameplayResultWidget_NoRegister()
	{
		return UABGameplayResultWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABGameplayResultWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGameplayResultWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UABGameplayWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameplayResultWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABGameplayResultWidget.h" },
		{ "ModuleRelativePath", "Public/ABGameplayResultWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGameplayResultWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameplayResultWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABGameplayResultWidget_Statics::ClassParams = {
		&UABGameplayResultWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABGameplayResultWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameplayResultWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGameplayResultWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABGameplayResultWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABGameplayResultWidget, 1225576840);
	template<> ARENABATTLE_API UClass* StaticClass<UABGameplayResultWidget>()
	{
		return UABGameplayResultWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABGameplayResultWidget(Z_Construct_UClass_UABGameplayResultWidget, &UABGameplayResultWidget::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UABGameplayResultWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameplayResultWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
