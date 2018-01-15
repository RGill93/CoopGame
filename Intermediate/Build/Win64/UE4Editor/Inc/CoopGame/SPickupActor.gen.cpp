// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPickupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPickupActor() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASPickupActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ASPickupActor::StaticRegisterNativesASPickupActor()
	{
	}
	UClass* Z_Construct_UClass_ASPickupActor_NoRegister()
	{
		return ASPickupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPickupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SPickupActor.h" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownDuration_MetaData[] = {
				{ "Category", "PickupActor" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDownDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CoolDownDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ASPickupActor, CoolDownDuration), METADATA_PARAMS(NewProp_CoolDownDuration_MetaData, ARRAY_COUNT(NewProp_CoolDownDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpClass_MetaData[] = {
				{ "Category", "PickupActor" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PowerUpClass = { UE4CodeGen_Private::EPropertyClass::Class, "PowerUpClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000801, 1, nullptr, STRUCT_OFFSET(ASPickupActor, PowerUpClass), Z_Construct_UClass_ASPowerupActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PowerUpClass_MetaData, ARRAY_COUNT(NewProp_PowerUpClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalComp = { UE4CodeGen_Private::EPropertyClass::Object, "DecalComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASPickupActor, DecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(NewProp_DecalComp_MetaData, ARRAY_COUNT(NewProp_DecalComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASPickupActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_SphereComp_MetaData, ARRAY_COUNT(NewProp_SphereComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoolDownDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerUpClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecalComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASPickupActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASPickupActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPickupActor, 2628814061);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPickupActor(Z_Construct_UClass_ASPickupActor, &ASPickupActor::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASPickupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
