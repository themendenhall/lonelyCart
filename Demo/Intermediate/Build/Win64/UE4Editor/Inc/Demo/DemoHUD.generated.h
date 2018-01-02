// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoHUD_generated_h
#error "DemoHUD.generated.h already included, missing '#pragma once' in DemoHUD.h"
#endif
#define DEMO_DemoHUD_generated_h

#define Demo_Source_Demo_DemoHUD_h_12_RPC_WRAPPERS
#define Demo_Source_Demo_DemoHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Demo_Source_Demo_DemoHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoHUD(); \
	friend DEMO_API class UClass* Z_Construct_UClass_ADemoHUD(); \
public: \
	DECLARE_CLASS(ADemoHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Demo_Source_Demo_DemoHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADemoHUD(); \
	friend DEMO_API class UClass* Z_Construct_UClass_ADemoHUD(); \
public: \
	DECLARE_CLASS(ADemoHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Demo_Source_Demo_DemoHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoHUD(ADemoHUD&&); \
	NO_API ADemoHUD(const ADemoHUD&); \
public:


#define Demo_Source_Demo_DemoHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoHUD(ADemoHUD&&); \
	NO_API ADemoHUD(const ADemoHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemoHUD)


#define Demo_Source_Demo_DemoHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define Demo_Source_Demo_DemoHUD_h_9_PROLOG
#define Demo_Source_Demo_DemoHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Source_Demo_DemoHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Demo_Source_Demo_DemoHUD_h_12_RPC_WRAPPERS \
	Demo_Source_Demo_DemoHUD_h_12_INCLASS \
	Demo_Source_Demo_DemoHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Demo_Source_Demo_DemoHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Source_Demo_DemoHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Demo_Source_Demo_DemoHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Demo_Source_Demo_DemoHUD_h_12_INCLASS_NO_PURE_DECLS \
	Demo_Source_Demo_DemoHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Demo_Source_Demo_DemoHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
