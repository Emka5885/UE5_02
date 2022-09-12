// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_02/Game/RollaBallGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollaBallGameModeBase() {}
// Cross Module References
	UE5_02_API UClass* Z_Construct_UClass_ARollaBallGameModeBase_NoRegister();
	UE5_02_API UClass* Z_Construct_UClass_ARollaBallGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5_02();
// End Cross Module References
	void ARollaBallGameModeBase::StaticRegisterNativesARollaBallGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARollaBallGameModeBase);
	UClass* Z_Construct_UClass_ARollaBallGameModeBase_NoRegister()
	{
		return ARollaBallGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARollaBallGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollaBallGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_02,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/RollaBallGameModeBase.h" },
		{ "ModuleRelativePath", "Game/RollaBallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollaBallGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollaBallGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARollaBallGameModeBase_Statics::ClassParams = {
		&ARollaBallGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARollaBallGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARollaBallGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARollaBallGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARollaBallGameModeBase.OuterSingleton, Z_Construct_UClass_ARollaBallGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARollaBallGameModeBase.OuterSingleton;
	}
	template<> UE5_02_API UClass* StaticClass<ARollaBallGameModeBase>()
	{
		return ARollaBallGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARollaBallGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARollaBallGameModeBase, ARollaBallGameModeBase::StaticClass, TEXT("ARollaBallGameModeBase"), &Z_Registration_Info_UClass_ARollaBallGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARollaBallGameModeBase), 2559243204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallGameModeBase_h_1916962662(TEXT("/Script/UE5_02"),
		Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
