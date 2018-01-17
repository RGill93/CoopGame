// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameMode() {}
// Cross Module References
	COOPGAME_API UFunction* Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameMode_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASGameMode_SpawnNewBot();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature()
	{
		struct _Script_CoopGame_eventOnActorKilled_Parms
		{
			AActor* VictimActor;
			AActor* KilledActor;
			AController* KillerController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerController = { UE4CodeGen_Private::EPropertyClass::Object, "KillerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_CoopGame_eventOnActorKilled_Parms, KillerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledActor = { UE4CodeGen_Private::EPropertyClass::Object, "KilledActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_CoopGame_eventOnActorKilled_Parms, KilledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictimActor = { UE4CodeGen_Private::EPropertyClass::Object, "VictimActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_CoopGame_eventOnActorKilled_Parms, VictimActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KillerController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KilledActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VictimActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CoopGame, "OnActorKilled__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_CoopGame_eventOnActorKilled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_ASGameMode_SpawnNewBot = FName(TEXT("SpawnNewBot"));
	void ASGameMode::SpawnNewBot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASGameMode_SpawnNewBot),NULL);
	}
	void ASGameMode::StaticRegisterNativesASGameMode()
	{
	}
	UFunction* Z_Construct_UFunction_ASGameMode_SpawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/SGameMode.h" },
				{ "ToolTip", "Hook for BP to spawn a single bot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameMode, "SpawnNewBot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameMode_NoRegister()
	{
		return ASGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASGameMode_SpawnNewBot, "SpawnNewBot" }, // 4019295503
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SGameMode.h" },
				{ "ModuleRelativePath", "Public/SGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActorKilled_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/SGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorKilled = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnActorKilled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ASGameMode, OnActorKilled), Z_Construct_UDelegateFunction_CoopGame_OnActorKilled__DelegateSignature, METADATA_PARAMS(NewProp_OnActorKilled_MetaData, ARRAY_COUNT(NewProp_OnActorKilled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenWaves_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/SGameMode.h" },
				{ "ToolTip", "This will handle the time between each wave" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenWaves = { UE4CodeGen_Private::EPropertyClass::Float, "TimeBetweenWaves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASGameMode, TimeBetweenWaves), METADATA_PARAMS(NewProp_TimeBetweenWaves_MetaData, ARRAY_COUNT(NewProp_TimeBetweenWaves_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnActorKilled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeBetweenWaves,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(ASGameMode, 1752199561);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameMode(Z_Construct_UClass_ASGameMode, &ASGameMode::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
