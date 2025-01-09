// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/APlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPlayerPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAPlayerPawn();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAPlayerPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Class AAPlayerPawn
void AAPlayerPawn::StaticRegisterNativesAAPlayerPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAPlayerPawn);
UClass* Z_Construct_UClass_AAPlayerPawn_NoRegister()
{
	return AAPlayerPawn::StaticClass();
}
struct Z_Construct_UClass_AAPlayerPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "APlayerPawn.h" },
		{ "ModuleRelativePath", "APlayerPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAPlayerPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayerPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPlayerPawn_Statics::ClassParams = {
	&AAPlayerPawn::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AAPlayerPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAPlayerPawn()
{
	if (!Z_Registration_Info_UClass_AAPlayerPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPlayerPawn.OuterSingleton, Z_Construct_UClass_AAPlayerPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAPlayerPawn.OuterSingleton;
}
template<> GHOSTTRAP_API UClass* StaticClass<AAPlayerPawn>()
{
	return AAPlayerPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAPlayerPawn);
AAPlayerPawn::~AAPlayerPawn() {}
// End Class AAPlayerPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAPlayerPawn, AAPlayerPawn::StaticClass, TEXT("AAPlayerPawn"), &Z_Registration_Info_UClass_AAPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPlayerPawn), 2573770180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_1504950599(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
