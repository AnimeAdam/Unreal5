// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5CPP/UE5CPPGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5CPPGameModeBase() {}
// Cross Module References
	UE5CPP_API UClass* Z_Construct_UClass_AUE5CPPGameModeBase_NoRegister();
	UE5CPP_API UClass* Z_Construct_UClass_AUE5CPPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5CPP();
// End Cross Module References
	void AUE5CPPGameModeBase::StaticRegisterNativesAUE5CPPGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5CPPGameModeBase);
	UClass* Z_Construct_UClass_AUE5CPPGameModeBase_NoRegister()
	{
		return AUE5CPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5CPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5CPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5CPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5CPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5CPPGameModeBase.h" },
		{ "ModuleRelativePath", "UE5CPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5CPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5CPPGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5CPPGameModeBase_Statics::ClassParams = {
		&AUE5CPPGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUE5CPPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5CPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5CPPGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5CPPGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5CPPGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5CPPGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5CPPGameModeBase.OuterSingleton;
	}
	template<> UE5CPP_API UClass* StaticClass<AUE5CPPGameModeBase>()
	{
		return AUE5CPPGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5CPPGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5CPP_Source_UE5CPP_UE5CPPGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5CPP_Source_UE5CPP_UE5CPPGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5CPPGameModeBase, AUE5CPPGameModeBase::StaticClass, TEXT("AUE5CPPGameModeBase"), &Z_Registration_Info_UClass_AUE5CPPGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5CPPGameModeBase), 3969532175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5CPP_Source_UE5CPP_UE5CPPGameModeBase_h_3117871366(TEXT("/Script/UE5CPP"),
		Z_CompiledInDeferFile_FID_UE5CPP_Source_UE5CPP_UE5CPPGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5CPP_Source_UE5CPP_UE5CPPGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
