// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPrototype/Public/Module/Edit/MeshFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshFactory() {}
// Cross Module References
	UEPROTOTYPE_API UClass* Z_Construct_UClass_AMeshFactory_NoRegister();
	UEPROTOTYPE_API UClass* Z_Construct_UClass_AMeshFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UEPrototype();
// End Cross Module References
	void AMeshFactory::StaticRegisterNativesAMeshFactory()
	{
	}
	UClass* Z_Construct_UClass_AMeshFactory_NoRegister()
	{
		return AMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_AMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UEPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Module/Edit/MeshFactory.h" },
		{ "ModuleRelativePath", "Public/Module/Edit/MeshFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeshFactory_Statics::ClassParams = {
		&AMeshFactory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMeshFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeshFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeshFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeshFactory, 1344325329);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeshFactory(Z_Construct_UClass_AMeshFactory, &AMeshFactory::StaticClass, TEXT("/Script/UEPrototype"), TEXT("AMeshFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
