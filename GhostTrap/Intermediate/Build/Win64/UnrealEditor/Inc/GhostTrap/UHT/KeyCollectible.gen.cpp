// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/KeyCollectible.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyCollectible() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GHOSTTRAP_API UClass* Z_Construct_UClass_AKeyCollectible();
GHOSTTRAP_API UClass* Z_Construct_UClass_AKeyCollectible_NoRegister();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Class AKeyCollectible
void AKeyCollectible::StaticRegisterNativesAKeyCollectible()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKeyCollectible);
UClass* Z_Construct_UClass_AKeyCollectible_NoRegister()
{
	return AKeyCollectible::StaticClass();
}
struct Z_Construct_UClass_AKeyCollectible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "KeyCollectible.h" },
		{ "ModuleRelativePath", "KeyCollectible.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyCollectible>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKeyCollectible_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCollectible_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeyCollectible_Statics::ClassParams = {
	&AKeyCollectible::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCollectible_Statics::Class_MetaDataParams), Z_Construct_UClass_AKeyCollectible_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKeyCollectible()
{
	if (!Z_Registration_Info_UClass_AKeyCollectible.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeyCollectible.OuterSingleton, Z_Construct_UClass_AKeyCollectible_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKeyCollectible.OuterSingleton;
}
template<> GHOSTTRAP_API UClass* StaticClass<AKeyCollectible>()
{
	return AKeyCollectible::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyCollectible);
AKeyCollectible::~AKeyCollectible() {}
// End Class AKeyCollectible

// Begin Registration
struct Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeyCollectible, AKeyCollectible::StaticClass, TEXT("AKeyCollectible"), &Z_Registration_Info_UClass_AKeyCollectible, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeyCollectible), 4030378203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_1244194008(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
