// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoCharacter_generated_h
#error "DemoCharacter.generated.h already included, missing '#pragma once' in DemoCharacter.h"
#endif
#define DEMO_DemoCharacter_generated_h

#define Demo_Source_Demo_DemoCharacter_h_14_RPC_WRAPPERS
#define Demo_Source_Demo_DemoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Demo_Source_Demo_DemoCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoCharacter(); \
	friend DEMO_API class UClass* Z_Construct_UClass_ADemoCharacter(); \
public: \
	DECLARE_CLASS(ADemoCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Demo_Source_Demo_DemoCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADemoCharacter(); \
	friend DEMO_API class UClass* Z_Construct_UClass_ADemoCharacter(); \
public: \
	DECLARE_CLASS(ADemoCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Demo_Source_Demo_DemoCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoCharacter(ADemoCharacter&&); \
	NO_API ADemoCharacter(const ADemoCharacter&); \
public:


#define Demo_Source_Demo_DemoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoCharacter(ADemoCharacter&&); \
	NO_API ADemoCharacter(const ADemoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemoCharacter)


#define Demo_Source_Demo_DemoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ADemoCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ADemoCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ADemoCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ADemoCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ADemoCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ADemoCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ADemoCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ADemoCharacter, L_MotionController); }


#define Demo_Source_Demo_DemoCharacter_h_11_PROLOG
#define Demo_Source_Demo_DemoCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Source_Demo_DemoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Demo_Source_Demo_DemoCharacter_h_14_RPC_WRAPPERS \
	Demo_Source_Demo_DemoCharacter_h_14_INCLASS \
	Demo_Source_Demo_DemoCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Demo_Source_Demo_DemoCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Source_Demo_DemoCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Demo_Source_Demo_DemoCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Demo_Source_Demo_DemoCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Demo_Source_Demo_DemoCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Demo_Source_Demo_DemoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
