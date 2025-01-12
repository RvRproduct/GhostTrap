// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/SpikeTrap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpikeTrap() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GHOSTTRAP_API UClass* Z_Construct_UClass_ASpikeTrap();
GHOSTTRAP_API UClass* Z_Construct_UClass_ASpikeTrap_NoRegister();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Class ASpikeTrap
void ASpikeTrap::StaticRegisterNativesASpikeTrap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpikeTrap);
UClass* Z_Construct_UClass_ASpikeTrap_NoRegister()
{
	return ASpikeTrap::StaticClass();
}
struct Z_Construct_UClass_ASpikeTrap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpikeTrap.h" },
		{ "ModuleRelativePath", "SpikeTrap.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpikeTrap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpikeTrap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeTrap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpikeTrap_Statics::ClassParams = {
	&ASpikeTrap::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikeTrap_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpikeTrap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpikeTrap()
{
	if (!Z_Registration_Info_UClass_ASpikeTrap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpikeTrap.OuterSingleton, Z_Construct_UClass_ASpikeTrap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpikeTrap.OuterSingleton;
}
template<> GHOSTTRAP_API UClass* StaticClass<ASpikeTrap>()
{
	return ASpikeTrap::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpikeTrap);
ASpikeTrap::~ASpikeTrap() {}
// End Class ASpikeTrap

// Begin Registration
struct Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpikeTrap, ASpikeTrap::StaticClass, TEXT("ASpikeTrap"), &Z_Registration_Info_UClass_ASpikeTrap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpikeTrap), 2328547777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_3243776391(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
