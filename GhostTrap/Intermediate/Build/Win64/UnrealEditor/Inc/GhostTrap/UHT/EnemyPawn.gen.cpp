// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/EnemyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPawn() {}

// Begin Cross Module References
GHOSTTRAP_API UClass* Z_Construct_UClass_AAIBasePawn();
GHOSTTRAP_API UClass* Z_Construct_UClass_AEnemyPawn();
GHOSTTRAP_API UClass* Z_Construct_UClass_AEnemyPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Class AEnemyPawn
void AEnemyPawn::StaticRegisterNativesAEnemyPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyPawn);
UClass* Z_Construct_UClass_AEnemyPawn_NoRegister()
{
	return AEnemyPawn::StaticClass();
}
struct Z_Construct_UClass_AEnemyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyPawn.h" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIBasePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPawn_Statics::ClassParams = {
	&AEnemyPawn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyPawn()
{
	if (!Z_Registration_Info_UClass_AEnemyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyPawn.OuterSingleton, Z_Construct_UClass_AEnemyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyPawn.OuterSingleton;
}
template<> GHOSTTRAP_API UClass* StaticClass<AEnemyPawn>()
{
	return AEnemyPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPawn);
AEnemyPawn::~AEnemyPawn() {}
// End Class AEnemyPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyPawn, AEnemyPawn::StaticClass, TEXT("AEnemyPawn"), &Z_Registration_Info_UClass_AEnemyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyPawn), 2341813893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_3815975390(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
