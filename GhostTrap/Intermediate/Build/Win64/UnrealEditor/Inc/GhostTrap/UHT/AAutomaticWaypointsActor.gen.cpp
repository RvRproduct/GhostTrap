// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/AAutomaticWaypointsActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAutomaticWaypointsActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAAutomaticWaypointsActor();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAAutomaticWaypointsActor_NoRegister();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAWaypointActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Class AAAutomaticWaypointsActor
void AAAutomaticWaypointsActor::StaticRegisterNativesAAAutomaticWaypointsActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAAutomaticWaypointsActor);
UClass* Z_Construct_UClass_AAAutomaticWaypointsActor_NoRegister()
{
	return AAAutomaticWaypointsActor::StaticClass();
}
struct Z_Construct_UClass_AAAutomaticWaypointsActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AAutomaticWaypointsActor.h" },
		{ "ModuleRelativePath", "AAutomaticWaypointsActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_waypoints_MetaData[] = {
		{ "Category", "WayPoints" },
		{ "ModuleRelativePath", "AAutomaticWaypointsActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_waypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_waypoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAAutomaticWaypointsActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::NewProp_waypoints_Inner = { "waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAWaypointActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::NewProp_waypoints = { "waypoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAAutomaticWaypointsActor, waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_waypoints_MetaData), NewProp_waypoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::NewProp_waypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::NewProp_waypoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::ClassParams = {
	&AAAutomaticWaypointsActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAAutomaticWaypointsActor()
{
	if (!Z_Registration_Info_UClass_AAAutomaticWaypointsActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAAutomaticWaypointsActor.OuterSingleton, Z_Construct_UClass_AAAutomaticWaypointsActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAAutomaticWaypointsActor.OuterSingleton;
}
template<> GHOSTTRAP_API UClass* StaticClass<AAAutomaticWaypointsActor>()
{
	return AAAutomaticWaypointsActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAAutomaticWaypointsActor);
AAAutomaticWaypointsActor::~AAAutomaticWaypointsActor() {}
// End Class AAAutomaticWaypointsActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_u1482733_Documents_GitHub_GhostTrap_GhostTrap_Source_GhostTrap_AAutomaticWaypointsActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAAutomaticWaypointsActor, AAAutomaticWaypointsActor::StaticClass, TEXT("AAAutomaticWaypointsActor"), &Z_Registration_Info_UClass_AAAutomaticWaypointsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAAutomaticWaypointsActor), 2577875599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_u1482733_Documents_GitHub_GhostTrap_GhostTrap_Source_GhostTrap_AAutomaticWaypointsActor_h_3919412243(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_Users_u1482733_Documents_GitHub_GhostTrap_GhostTrap_Source_GhostTrap_AAutomaticWaypointsActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_u1482733_Documents_GitHub_GhostTrap_GhostTrap_Source_GhostTrap_AAutomaticWaypointsActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
