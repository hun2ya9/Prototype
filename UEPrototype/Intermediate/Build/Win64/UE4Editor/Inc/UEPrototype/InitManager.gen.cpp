// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPrototype/Public/Module/Init/InitManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitManager() {}
// Cross Module References
	UEPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_UEPrototype_ReferenceDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UEPrototype();
	UEPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_UEPrototype_InitEventDispatcher__DelegateSignature();
	UEPROTOTYPE_API UClass* Z_Construct_UClass_AInitManager_NoRegister();
	UEPROTOTYPE_API UClass* Z_Construct_UClass_AInitManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UEPROTOTYPE_API UFunction* Z_Construct_UFunction_AInitManager_InitializeUniques();
	UEPROTOTYPE_API UFunction* Z_Construct_UFunction_AInitManager_OnEndInitEvent();
	UEPROTOTYPE_API UFunction* Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEPrototype_ReferenceDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEPrototype_ReferenceDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Module/Init/InitManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEPrototype_ReferenceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UEPrototype, "ReferenceDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEPrototype_ReferenceDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UEPrototype_ReferenceDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEPrototype_ReferenceDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEPrototype_ReferenceDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UEPrototype_InitEventDispatcher__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEPrototype_InitEventDispatcher__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Module/Init/InitManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEPrototype_InitEventDispatcher__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UEPrototype, "InitEventDispatcher__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEPrototype_InitEventDispatcher__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UEPrototype_InitEventDispatcher__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEPrototype_InitEventDispatcher__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEPrototype_InitEventDispatcher__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AInitManager::StaticRegisterNativesAInitManager()
	{
		UClass* Class = AInitManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeUniques", &AInitManager::execInitializeUniques },
			{ "OnEndInitEvent", &AInitManager::execOnEndInitEvent },
			{ "SafeRefUniqueToActor", &AInitManager::execSafeRefUniqueToActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInitManager_InitializeUniques_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInitManager_InitializeUniques_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prototpe|Init" },
		{ "ModuleRelativePath", "Public/Module/Init/InitManager.h" },
		{ "ToolTip", "\xeb\x8b\xa8 \xed\x95\x9c \xea\xb0\x9c\xeb\xa7\x8c \xec\x83\x9d\xec\x84\xb1\xeb\x90\x98\xec\x96\xb4\xec\x95\xbc \xed\x95\xa0 \xea\xb2\x83\xeb\x93\xa4\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94(\xec\x8a\xa4\xed\x8f\xb0)\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInitManager_InitializeUniques_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInitManager, "InitializeUniques", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInitManager_InitializeUniques_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInitManager_InitializeUniques_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInitManager_InitializeUniques()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInitManager_InitializeUniques_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInitManager_OnEndInitEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInitManager_OnEndInitEvent_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Prototype|Init" },
		{ "ModuleRelativePath", "Public/Module/Init/InitManager.h" },
		{ "ToolTip", "InitManager\xea\xb0\x80 \xec\x9c\xa0\xed\x82\xa4\xeb\x93\x9c \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94\xeb\xa5\xbc \xec\xa0\x84\xeb\xb6\x80 \xec\x88\x98\xed\x96\x89\xed\x96\x88\xec\x9d\x84 \xeb\x95\x8c \xeb\xb0\x9c\xec\x83\x9d\xec\x8b\x9c\xed\x82\xac \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8\xec\x9e\x85\xeb\x8b\x88\xeb\x8b\xa4.\nbUniquesEndInit\xec\x9d\x84 true\xeb\xa1\x9c \xec\xa0\x84\xed\x99\x98\xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInitManager_OnEndInitEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInitManager, "OnEndInitEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInitManager_OnEndInitEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInitManager_OnEndInitEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInitManager_OnEndInitEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInitManager_OnEndInitEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics
	{
		struct InitManager_eventSafeRefUniqueToActor_Parms
		{
			FScriptDelegate EventToBind;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_EventToBind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::NewProp_EventToBind = { UE4CodeGen_Private::EPropertyClass::Delegate, "EventToBind", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InitManager_eventSafeRefUniqueToActor_Parms, EventToBind), Z_Construct_UDelegateFunction_UEPrototype_ReferenceDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::NewProp_EventToBind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prototpe|Init" },
		{ "ModuleRelativePath", "Public/Module/Init/InitManager.h" },
		{ "ToolTip", "\xec\x9c\xa0\xeb\x8b\x88\xed\x81\xac \xea\xb0\x9d\xec\xb2\xb4\xeb\xa5\xbc \xed\x95\x84\xec\x9a\x94\xeb\xa1\x9c \xed\x95\x98\xeb\x8a\x94 \xea\xb0\x9d\xec\xb2\xb4\xea\xb0\x80 \xec\x95\x88\xec\xa0\x84\xed\x95\x98\xea\xb2\x8c \xeb\xa0\x88\xed\x8d\xbc\xeb\x9f\xb0\xec\x8b\xb1\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d \xed\x95\xa9\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInitManager, "SafeRefUniqueToActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InitManager_eventSafeRefUniqueToActor_Parms), Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInitManager_NoRegister()
	{
		return AInitManager::StaticClass();
	}
	struct Z_Construct_UClass_AInitManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUniquesEndInit_MetaData[];
#endif
		static void NewProp_bUniquesEndInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUniquesEndInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUniquesEndInit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUniquesEndInit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInitManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEPrototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInitManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInitManager_InitializeUniques, "InitializeUniques" }, // 2808618898
		{ &Z_Construct_UFunction_AInitManager_OnEndInitEvent, "OnEndInitEvent" }, // 393202182
		{ &Z_Construct_UFunction_AInitManager_SafeRefUniqueToActor, "SafeRefUniqueToActor" }, // 3082819245
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInitManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Module/Init/InitManager.h" },
		{ "ModuleRelativePath", "Public/Module/Init/InitManager.h" },
		{ "ToolTip", "*     AInitManager\xeb\x8a\x94 \xeb\x8b\xa8 \xed\x95\x98\xeb\x82\x98\xeb\xa7\x8c \xec\x83\x9d\xec\x84\xb1\xeb\x90\x98\xec\x96\xb4\xec\x95\xbc \xed\x95\x98\xeb\x8a\x94, \xeb\x98\x90\xeb\x8a\x94 \xea\xb2\x8c\xec\x9e\x84 \xec\x8b\x9c\xec\x9e\x91\xec\x8b\x9c\n*     \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94\xeb\x90\x98\xec\x96\xb4\xec\x95\xbc \xed\x95\x98\xeb\x8a\x94 \xea\xb2\x83\xeb\x93\xa4\xec\x9d\x84 \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94\xed\x95\x98\xeb\x8a\x94 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x9e\x85\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInitManager_Statics::NewProp_bUniquesEndInit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Prototype|Init" },
		{ "ModuleRelativePath", "Public/Module/Init/InitManager.h" },
		{ "ToolTip", "\xec\x9c\xa0\xeb\x8b\x88\xed\x81\xac\xeb\x93\xa4\xec\x9d\xb4 \xeb\xaa\xa8\xeb\x91\x90 \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94\xeb\xa5\xbc \xeb\xa7\x88\xec\xb3\xa4\xeb\x8a\x94\xec\xa7\x80 \xec\x97\xac\xeb\xb6\x80\xec\x9e\x85\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	void Z_Construct_UClass_AInitManager_Statics::NewProp_bUniquesEndInit_SetBit(void* Obj)
	{
		((AInitManager*)Obj)->bUniquesEndInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInitManager_Statics::NewProp_bUniquesEndInit = { UE4CodeGen_Private::EPropertyClass::Bool, "bUniquesEndInit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AInitManager), &Z_Construct_UClass_AInitManager_Statics::NewProp_bUniquesEndInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInitManager_Statics::NewProp_bUniquesEndInit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInitManager_Statics::NewProp_bUniquesEndInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInitManager_Statics::NewProp_OnUniquesEndInit_MetaData[] = {
		{ "Category", "Prototype|Init" },
		{ "ModuleRelativePath", "Public/Module/Init/InitManager.h" },
		{ "ToolTip", "\xec\xb4\x88\xea\xb8\xb0\xed\x99\x94 \xeb\xa7\xa4\xeb\x8b\x88\xec\xa0\x80\xea\xb0\x80 \xec\x9c\xa0\xeb\x8b\x88\xed\x81\xac \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94\xeb\xa5\xbc \xec\x88\x98\xed\x96\x89\xed\x95\x9c \xec\x9d\xb4\xed\x9b\x84\xec\x97\x90 \xec\x9d\xb4\xea\xb2\x83\xeb\x93\xa4\xec\x9d\x84 \xed\x95\x84\xec\x9a\x94\xeb\xa1\x9c \xed\x95\x98\xeb\x8a\x94\n\xeb\x8c\x80\xec\x83\x81\xec\x97\x90\xea\xb2\x8c \xeb\xb8\x8c\xeb\xa1\x9c\xeb\x93\x9c\xec\xba\x90\xec\x8a\xa4\xed\x8a\xb8\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8 \xeb\x94\x94\xec\x8a\xa4\xed\x8c\xa8\xec\xb2\x98\xec\x9e\x85\xeb\x8b\x88\xeb\x8b\xa4." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AInitManager_Statics::NewProp_OnUniquesEndInit = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUniquesEndInit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010100010080000, 1, nullptr, STRUCT_OFFSET(AInitManager, OnUniquesEndInit), Z_Construct_UDelegateFunction_UEPrototype_InitEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AInitManager_Statics::NewProp_OnUniquesEndInit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInitManager_Statics::NewProp_OnUniquesEndInit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInitManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInitManager_Statics::NewProp_bUniquesEndInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInitManager_Statics::NewProp_OnUniquesEndInit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInitManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInitManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInitManager_Statics::ClassParams = {
		&AInitManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AInitManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AInitManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AInitManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInitManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInitManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInitManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInitManager, 2118406135);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInitManager(Z_Construct_UClass_AInitManager, &AInitManager::StaticClass, TEXT("/Script/UEPrototype"), TEXT("AInitManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInitManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
