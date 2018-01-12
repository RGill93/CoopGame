// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define COOPGAME_SWeapon_generated_h

#define CoopGame_Source_CoopGame_Public_SWeapon_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	}


#define CoopGame_Source_CoopGame_Public_SWeapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopGame_Source_CoopGame_Public_SWeapon_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend COOPGAME_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopGame_Source_CoopGame_Public_SWeapon_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define CoopGame_Source_CoopGame_Public_SWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define CoopGame_Source_CoopGame_Public_SWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ASWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ASWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__ImpactEffect() { return STRUCT_OFFSET(ASWeapon, ImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(ASWeapon, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(ASWeapon, TracerTargetName); }


#define CoopGame_Source_CoopGame_Public_SWeapon_h_13_PROLOG
#define CoopGame_Source_CoopGame_Public_SWeapon_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SWeapon_h_16_RPC_WRAPPERS \
	CoopGame_Source_CoopGame_Public_SWeapon_h_16_INCLASS \
	CoopGame_Source_CoopGame_Public_SWeapon_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopGame_Source_CoopGame_Public_SWeapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopGame_Source_CoopGame_Public_SWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopGame_Source_CoopGame_Public_SWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SWeapon_h_16_INCLASS_NO_PURE_DECLS \
	CoopGame_Source_CoopGame_Public_SWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopGame_Source_CoopGame_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS