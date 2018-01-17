// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AI/STrackerBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTrackerBot() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASTrackerBot_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASTrackerBot();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ASTrackerBot::StaticRegisterNativesASTrackerBot()
	{
		UClass* Class = ASTrackerBot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakeDamage", (Native)&ASTrackerBot::execHandleTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage()
	{
		struct STrackerBot_eventHandleTakeDamage_Parms
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
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "OwningHealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, OwningHealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_OwningHealthComp_MetaData, ARRAY_COUNT(NewProp_OwningHealthComp_MetaData)) };
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
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTrackerBot, "HandleTakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(STrackerBot_eventHandleTakeDamage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASTrackerBot_NoRegister()
	{
		return ASTrackerBot::StaticClass();
	}
	UClass* Z_Construct_UClass_ASTrackerBot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage, "HandleTakeDamage" }, // 441519141
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "AI/STrackerBot.h" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeSound_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodeSound = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodeSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, ExplodeSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_ExplodeSound_MetaData, ARRAY_COUNT(NewProp_ExplodeSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfDestructSound_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
				{ "ToolTip", "Adding Sound to our tracker bot when it explodes" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfDestructSound = { UE4CodeGen_Private::EPropertyClass::Object, "SelfDestructSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, SelfDestructSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_SelfDestructSound_MetaData, ARRAY_COUNT(NewProp_SelfDestructSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfDamageInterval_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfDamageInterval = { UE4CodeGen_Private::EPropertyClass::Float, "SelfDamageInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, SelfDamageInterval), METADATA_PARAMS(NewProp_SelfDamageInterval_MetaData, ARRAY_COUNT(NewProp_SelfDamageInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
				{ "ToolTip", "* checks the explosion damage\n* default values set in the constructor" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosionDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, ExplosionDamage), METADATA_PARAMS(NewProp_ExplosionDamage_MetaData, ARRAY_COUNT(NewProp_ExplosionDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
				{ "ToolTip", "* checks the explosion radius\n* default values set in the constructor" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosionRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, ExplosionRadius), METADATA_PARAMS(NewProp_ExplosionRadius_MetaData, ARRAY_COUNT(NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
				{ "ToolTip", "ParticleSystem for the explosion effect" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ExplosionEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_ExplosionEffect_MetaData, ARRAY_COUNT(NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDistanceToTarget_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredDistanceToTarget = { UE4CodeGen_Private::EPropertyClass::Float, "RequiredDistanceToTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, RequiredDistanceToTarget), METADATA_PARAMS(NewProp_RequiredDistanceToTarget_MetaData, ARRAY_COUNT(NewProp_RequiredDistanceToTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			auto NewProp_bUseVelocityChange_SetBit = [](void* Obj){ ((ASTrackerBot*)Obj)->bUseVelocityChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVelocityChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASTrackerBot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseVelocityChange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseVelocityChange_MetaData, ARRAY_COUNT(NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
				{ "ToolTip", "the three functions below are for the AI movement" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementForce = { UE4CodeGen_Private::EPropertyClass::Float, "MovementForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, MovementForce), METADATA_PARAMS(NewProp_MovementForce_MetaData, ARRAY_COUNT(NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_SphereComp_MetaData, ARRAY_COUNT(NewProp_SphereComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, HealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComp_MetaData, ARRAY_COUNT(NewProp_HealthComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplodeSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfDestructSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfDamageInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplosionEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredDistanceToTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseVelocityChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASTrackerBot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASTrackerBot::StaticClass,
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
	IMPLEMENT_CLASS(ASTrackerBot, 3226495433);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTrackerBot(Z_Construct_UClass_ASTrackerBot, &ASTrackerBot::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASTrackerBot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTrackerBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
