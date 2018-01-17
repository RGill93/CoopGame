// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SExplosiveBarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSExplosiveBarrel() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASExplosiveBarrel_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASExplosiveBarrel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASExplosiveBarrel::StaticRegisterNativesASExplosiveBarrel()
	{
		UClass* Class = ASExplosiveBarrel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthChanged", (Native)&ASExplosiveBarrel::execOnHealthChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged()
	{
		struct SExplosiveBarrel_eventOnHealthChanged_Parms
		{
			USHealthComponent* OwningHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "OwningHealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, OwningHealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_OwningHealthComp_MetaData, ARRAY_COUNT(NewProp_OwningHealthComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningHealthComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASExplosiveBarrel, "OnHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(SExplosiveBarrel_eventOnHealthChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASExplosiveBarrel_NoRegister()
	{
		return ASExplosiveBarrel::StaticClass();
	}
	UClass* Z_Construct_UClass_ASExplosiveBarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged, "OnHealthChanged" }, // 3418736407
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SExplosiveBarrel.h" },
				{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodedMaterial_MetaData[] = {
				{ "Category", "FX" },
				{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
				{ "ToolTip", "The material to replace the original on the mesh once exploded (a blackened effect)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodedMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodedMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, ExplodedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_ExplodedMaterial_MetaData, ARRAY_COUNT(NewProp_ExplodedMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[] = {
				{ "Category", "FX" },
				{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
				{ "ToolTip", "Particle to play when health reached zero" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ExplosionEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_ExplosionEffect_MetaData, ARRAY_COUNT(NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionImpulse_MetaData[] = {
				{ "Category", "FX" },
				{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
				{ "ToolTip", "Impulse applied to the barrel mesh when it explodes to boost it up a little" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosionImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, ExplosionImpulse), METADATA_PARAMS(NewProp_ExplosionImpulse_MetaData, ARRAY_COUNT(NewProp_ExplosionImpulse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialForceComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadialForceComp = { UE4CodeGen_Private::EPropertyClass::Object, "RadialForceComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, RadialForceComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(NewProp_RadialForceComp_MetaData, ARRAY_COUNT(NewProp_RadialForceComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, HealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComp_MetaData, ARRAY_COUNT(NewProp_HealthComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplodedMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadialForceComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASExplosiveBarrel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASExplosiveBarrel::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ASExplosiveBarrel, 3970313164);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASExplosiveBarrel(Z_Construct_UClass_ASExplosiveBarrel, &ASExplosiveBarrel::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASExplosiveBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASExplosiveBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
