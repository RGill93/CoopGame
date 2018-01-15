// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPowerupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerupActor() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnActivated();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnExpired();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnTickPowerup();
// End Cross Module References
	static FName NAME_ASPowerupActor_OnActivated = FName(TEXT("OnActivated"));
	void ASPowerupActor::OnActivated(AActor* ActiveFor)
	{
		SPowerupActor_eventOnActivated_Parms Parms;
		Parms.ActiveFor=ActiveFor;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnActivated),&Parms);
	}
	static FName NAME_ASPowerupActor_OnExpired = FName(TEXT("OnExpired"));
	void ASPowerupActor::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnExpired),NULL);
	}
	static FName NAME_ASPowerupActor_OnPowerupStateChanged = FName(TEXT("OnPowerupStateChanged"));
	void ASPowerupActor::OnPowerupStateChanged(bool bNewIsActive)
	{
		SPowerupActor_eventOnPowerupStateChanged_Parms Parms;
		Parms.bNewIsActive=bNewIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnPowerupStateChanged),&Parms);
	}
	static FName NAME_ASPowerupActor_OnPowerupTicked = FName(TEXT("OnPowerupTicked"));
	void ASPowerupActor::OnPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_OnPowerupTicked),NULL);
	}
	void ASPowerupActor::StaticRegisterNativesASPowerupActor()
	{
		UClass* Class = ASPowerupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_PowerupActive", (Native)&ASPowerupActor::execOnRep_PowerupActive },
			{ "OnTickPowerup", (Native)&ASPowerupActor::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveFor = { UE4CodeGen_Private::EPropertyClass::Object, "ActiveFor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SPowerupActor_eventOnActivated_Parms, ActiveFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveFor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "OnActivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(SPowerupActor_eventOnActivated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "OnExpired", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewIsActive_SetBit = [](void* Obj){ ((SPowerupActor_eventOnPowerupStateChanged_Parms*)Obj)->bNewIsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewIsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SPowerupActor_eventOnPowerupStateChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewIsActive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewIsActive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "OnPowerupStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(SPowerupActor_eventOnPowerupStateChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "OnPowerupTicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "OnRep_PowerupActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "OnTickPowerup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPowerupActor_NoRegister()
	{
		return ASPowerupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPowerupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASPowerupActor_OnActivated, "OnActivated" }, // 1789745950
				{ &Z_Construct_UFunction_ASPowerupActor_OnExpired, "OnExpired" }, // 1073939576
				{ &Z_Construct_UFunction_ASPowerupActor_OnPowerupStateChanged, "OnPowerupStateChanged" }, // 3471280941
				{ &Z_Construct_UFunction_ASPowerupActor_OnPowerupTicked, "OnPowerupTicked" }, // 2724566135
				{ &Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive, "OnRep_PowerupActive" }, // 2990180014
				{ &Z_Construct_UFunction_ASPowerupActor_OnTickPowerup, "OnTickPowerup" }, // 2067203097
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SPowerupActor.h" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPowerUpActive_MetaData[] = {
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			auto NewProp_bIsPowerUpActive_SetBit = [](void* Obj){ ((ASPowerupActor*)Obj)->bIsPowerUpActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPowerUpActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPowerUpActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000020, 1, "OnRep_PowerupActive", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASPowerupActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPowerUpActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPowerUpActive_MetaData, ARRAY_COUNT(NewProp_bIsPowerUpActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNrOfTicks_MetaData[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
				{ "ToolTip", "Total times we apply the Power up effect" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNrOfTicks = { UE4CodeGen_Private::EPropertyClass::Int, "TotalNrOfTicks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASPowerupActor, TotalNrOfTicks), METADATA_PARAMS(NewProp_TotalNrOfTicks_MetaData, ARRAY_COUNT(NewProp_TotalNrOfTicks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
				{ "ToolTip", "Time between power up ticks" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval = { UE4CodeGen_Private::EPropertyClass::Float, "PowerupInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASPowerupActor, PowerupInterval), METADATA_PARAMS(NewProp_PowerupInterval_MetaData, ARRAY_COUNT(NewProp_PowerupInterval_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPowerUpActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalNrOfTicks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerupInterval,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASPowerupActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASPowerupActor::StaticClass,
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
	IMPLEMENT_CLASS(ASPowerupActor, 3457707508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerupActor(Z_Construct_UClass_ASPowerupActor, &ASPowerupActor::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASPowerupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
