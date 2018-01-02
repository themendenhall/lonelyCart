// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef DEMO_DemoProjectile_generated_h
#error "DemoProjectile.generated.h already included, missing '#pragma once' in DemoProjectile.h"
#endif
#define DEMO_DemoProjectile_generated_h

#define Demo_Source_Demo_DemoProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Demo_Source_Demo_DemoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Demo_Source_Demo_DemoProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoProjectile(); \
	friend DEMO_API class UClass* Z_Construct_UClass_ADemoProjectile(); \
public: \
	DECLARE_CLASS(ADemoProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Demo_Source_Demo_DemoProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADemoProjectile(); \
	friend DEMO_API class UClass* Z_Construct_UClass_ADemoProjectile(); \
public: \
	DECLARE_CLASS(ADemoProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Demo"), NO_API) \
	DECLARE_SERIALIZER(ADemoProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Demo_Source_Demo_DemoProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoProjectile(ADemoProjectile&&); \
	NO_API ADemoProjectile(const ADemoProjectile&); \
public:


#define Demo_Source_Demo_DemoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemoProjectile(ADemoProjectile&&); \
	NO_API ADemoProjectile(const ADemoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemoProjectile)


#define Demo_Source_Demo_DemoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ADemoProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ADemoProjectile, ProjectileMovement); }


#define Demo_Source_Demo_DemoProjectile_h_9_PROLOG
#define Demo_Source_Demo_DemoProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Source_Demo_DemoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Demo_Source_Demo_DemoProjectile_h_12_RPC_WRAPPERS \
	Demo_Source_Demo_DemoProjectile_h_12_INCLASS \
	Demo_Source_Demo_DemoProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Demo_Source_Demo_DemoProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_Source_Demo_DemoProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Demo_Source_Demo_DemoProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Demo_Source_Demo_DemoProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Demo_Source_Demo_DemoProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Demo_Source_Demo_DemoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
