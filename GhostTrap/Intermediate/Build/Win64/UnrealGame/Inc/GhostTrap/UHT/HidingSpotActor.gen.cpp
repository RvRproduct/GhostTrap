// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/HidingSpotActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHidingSpotActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GHOSTTRAP_API UClass* Z_Construct_UClass_AHidingSpotActor();
GHOSTTRAP_API UClass* Z_Construct_UClass_AHidingSpotActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Class AHidingSpotActor
void AHidingSpotActor::StaticRegisterNativesAHidingSpotActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHidingSpotActor);
UClass* Z_Construct_UClass_AHidingSpotActor_NoRegister()
{
	return AHidingSpotActor::StaticClass();
}
struct Z_Construct_UClass_AHidingSpotActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HidingSpotActor.h" },
		{ "ModuleRelativePath", "HidingSpotActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHidingSpotActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHidingSpotActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHidingSpotActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHidingSpotActor_Statics::ClassParams = {
	&AHidingSpotActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHidingSpotActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHidingSpotActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHidingSpotActor()
{
	if (!Z_Registration_Info_UClass_AHidingSpotActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHidingSpotActor.OuterSingleton, Z_Construct_UClass_AHidingSpotActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHidingSpotActor.OuterSingleton;
}
template<> GHOSTTRAP_API UClass* StaticClass<AHidingSpotActor>()
{
	return AHidingSpotActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHidingSpotActor);
AHidingSpotActor::~AHidingSpotActor() {}
// End Class AHidingSpotActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_HidingSpotActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHidingSpotActor, AHidingSpotActor::StaticClass, TEXT("AHidingSpotActor"), &Z_Registration_Info_UClass_AHidingSpotActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHidingSpotActor), 1111240036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_HidingSpotActor_h_714305530(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_HidingSpotActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_HidingSpotActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
