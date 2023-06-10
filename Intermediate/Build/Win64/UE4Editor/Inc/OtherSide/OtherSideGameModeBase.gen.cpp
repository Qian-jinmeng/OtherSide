// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OtherSide/OtherSideGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtherSideGameModeBase() {}
// Cross Module References
	OTHERSIDE_API UClass* Z_Construct_UClass_AOtherSideGameModeBase_NoRegister();
	OTHERSIDE_API UClass* Z_Construct_UClass_AOtherSideGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OtherSide();
// End Cross Module References
	void AOtherSideGameModeBase::StaticRegisterNativesAOtherSideGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOtherSideGameModeBase_NoRegister()
	{
		return AOtherSideGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOtherSideGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOtherSideGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OtherSide,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOtherSideGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OtherSideGameModeBase.h" },
		{ "ModuleRelativePath", "OtherSideGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOtherSideGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOtherSideGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOtherSideGameModeBase_Statics::ClassParams = {
		&AOtherSideGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOtherSideGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOtherSideGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOtherSideGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOtherSideGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOtherSideGameModeBase, 1930009163);
	template<> OTHERSIDE_API UClass* StaticClass<AOtherSideGameModeBase>()
	{
		return AOtherSideGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOtherSideGameModeBase(Z_Construct_UClass_AOtherSideGameModeBase, &AOtherSideGameModeBase::StaticClass, TEXT("/Script/OtherSide"), TEXT("AOtherSideGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOtherSideGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
