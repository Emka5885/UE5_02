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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UE5_02_API UClass* Z_Construct_UClass_URollaBallWidget_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "// TODO - Implement Widget Variables\n" },
		{ "ModuleRelativePath", "Game/RollaBallGameModeBase.h" },
		{ "ToolTip", "TODO - Implement Widget Variables" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidgetClass = { "GameWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollaBallGameModeBase, GameWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/RollaBallGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidget = { "GameWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollaBallGameModeBase, GameWidget), Z_Construct_UClass_URollaBallWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARollaBallGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallGameModeBase_Statics::NewProp_GameWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollaBallGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollaBallGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARollaBallGameModeBase_Statics::ClassParams = {
		&ARollaBallGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARollaBallGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallGameModeBase_Statics::PropPointers),
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
		{ Z_Construct_UClass_ARollaBallGameModeBase, ARollaBallGameModeBase::StaticClass, TEXT("ARollaBallGameModeBase"), &Z_Registration_Info_UClass_ARollaBallGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARollaBallGameModeBase), 4178297763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallGameModeBase_h_3851784570(TEXT("/Script/UE5_02"),
		Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
