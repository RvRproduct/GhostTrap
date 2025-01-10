// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/AWaypointActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAWaypointActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAWaypointActor();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAWaypointActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Class AAWaypointActor
void AAWaypointActor::StaticRegisterNativesAAWaypointActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAWaypointActor);
UClass* Z_Construct_UClass_AAWaypointActor_NoRegister()
{
	return AAWaypointActor::StaticClass();
}
struct Z_Construct_UClass_AAWaypointActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AWaypointActor.h" },
		{ "ModuleRelativePath", "AWaypointActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAWaypointActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAWaypointActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAWaypointActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAWaypointActor_Statics::ClassParams = {
	&AAWaypointActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAWaypointActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAWaypointActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAWaypointActor()
{
	if (!Z_Registration_Info_UClass_AAWaypointActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAWaypointActor.OuterSingleton, Z_Construct_UClass_AAWaypointActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAWaypointActor.OuterSingleton;
}
template<> GHOSTTRAP_API UClass* StaticClass<AAWaypointActor>()
{
	return AAWaypointActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAWaypointActor);
AAWaypointActor::~AAWaypointActor() {}
// End Class AAWaypointActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_u1482733_Documents_GitHub_GhostTrap_GhostTrap_Source_GhostTrap_AWaypointActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAWaypointActor, AAWaypointActor::StaticClass, TEXT("AAWaypointActor"), &Z_Registration_Info_UClass_AAWaypointActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAWaypointActor), 3724751814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u1482733_Documents_GitHub_GhostTrap_GhostTrap_Source_GhostTrap_AWaypointActor_h_4060898766(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_Users_u1482733_Documents_GitHub_GhostTrap_GhostTrap_Source_GhostTrap_AWaypointActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u1482733_Documents_GitHub_GhostTrap_GhostTrap_Source_GhostTrap_AWaypointActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
