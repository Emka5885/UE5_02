// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_02/Game/RollaBallPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollaBallPlayer() {}
// Cross Module References
	UE5_02_API UClass* Z_Construct_UClass_ARollaBallPlayer_NoRegister();
	UE5_02_API UClass* Z_Construct_UClass_ARollaBallPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UE5_02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ARollaBallPlayer::StaticRegisterNativesARollaBallPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARollaBallPlayer);
	UClass* Z_Construct_UClass_ARollaBallPlayer_NoRegister()
	{
		return ARollaBallPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ARollaBallPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxJumpCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxJumpCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollaBallPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_02,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game/RollaBallPlayer.h" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Define Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
		{ "ToolTip", "Define Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollaBallPlayer, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollaBallPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollaBallPlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce_MetaData[] = {
		{ "Category", "RollaBallPlayer" },
		{ "Comment", "// VARIABLES //\n" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
		{ "ToolTip", "VARIABLES" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce = { "MoveForce", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollaBallPlayer, MoveForce), METADATA_PARAMS(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "RollaBallPlayer" },
		{ "Comment", "//T?umaczenie - (force) \"si?a\"\n" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
		{ "ToolTip", "T?umaczenie - (force) \"si?a\"" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse = { "JumpImpulse", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollaBallPlayer, JumpImpulse), METADATA_PARAMS(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount_MetaData[] = {
		{ "Category", "RollaBallPlayer" },
		{ "ModuleRelativePath", "Game/RollaBallPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount = { "MaxJumpCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollaBallPlayer, MaxJumpCount), METADATA_PARAMS(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARollaBallPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MoveForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_JumpImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollaBallPlayer_Statics::NewProp_MaxJumpCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollaBallPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollaBallPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARollaBallPlayer_Statics::ClassParams = {
		&ARollaBallPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARollaBallPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARollaBallPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARollaBallPlayer()
	{
		if (!Z_Registration_Info_UClass_ARollaBallPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARollaBallPlayer.OuterSingleton, Z_Construct_UClass_ARollaBallPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARollaBallPlayer.OuterSingleton;
	}
	template<> UE5_02_API UClass* StaticClass<ARollaBallPlayer>()
	{
		return ARollaBallPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARollaBallPlayer);
	struct Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARollaBallPlayer, ARollaBallPlayer::StaticClass, TEXT("ARollaBallPlayer"), &Z_Registration_Info_UClass_ARollaBallPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARollaBallPlayer), 267723288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallPlayer_h_3193827627(TEXT("/Script/UE5_02"),
		Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_02_Source_UE5_02_Game_RollaBallPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
