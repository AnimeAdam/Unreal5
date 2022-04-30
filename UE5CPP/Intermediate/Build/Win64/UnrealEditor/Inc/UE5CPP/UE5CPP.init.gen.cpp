// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5CPP_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5CPP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5CPP()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5CPP.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5CPP",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x925854F1,
				0xC2F869C9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5CPP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5CPP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5CPP(Z_Construct_UPackage__Script_UE5CPP, TEXT("/Script/UE5CPP"), Z_Registration_Info_UPackage__Script_UE5CPP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x925854F1, 0xC2F869C9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
