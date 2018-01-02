// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DemoHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoHUD() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_ADemoHUD_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_ADemoHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void ADemoHUD::StaticRegisterNativesADemoHUD()
	{
	}
	UClass* Z_Construct_UClass_ADemoHUD_NoRegister()
	{
		return ADemoHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ADemoHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Demo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "DemoHUD.h" },
				{ "ModuleRelativePath", "DemoHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADemoHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADemoHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADemoHUD, 287574667);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADemoHUD(Z_Construct_UClass_ADemoHUD, &ADemoHUD::StaticClass, TEXT("/Script/Demo"), TEXT("ADemoHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
