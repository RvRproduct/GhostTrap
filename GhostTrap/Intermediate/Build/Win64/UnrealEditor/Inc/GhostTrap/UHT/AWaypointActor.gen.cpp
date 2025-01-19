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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pathLeftWaypoints_MetaData[] = {
		{ "Category", "WaypointsLeft" },
		{ "ModuleRelativePath", "AWaypointActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pathRightWaypoints_MetaData[] = {
		{ "Category", "WaypointsRight" },
		{ "ModuleRelativePath", "AWaypointActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pathUpWaypoints_MetaData[] = {
		{ "Category", "WaypointsUp" },
		{ "ModuleRelativePath", "AWaypointActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pathDownWaypoints_MetaData[] = {
		{ "Category", "WaypointsDown" },
		{ "ModuleRelativePath", "AWaypointActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pathLeftWaypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pathLeftWaypoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pathRightWaypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pathRightWaypoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pathUpWaypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pathUpWaypoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pathDownWaypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pathDownWaypoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAWaypointActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathLeftWaypoints_Inner = { "pathLeftWaypoints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAWaypointActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathLeftWaypoints = { "pathLeftWaypoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAWaypointActor, pathLeftWaypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pathLeftWaypoints_MetaData), NewProp_pathLeftWaypoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathRightWaypoints_Inner = { "pathRightWaypoints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAWaypointActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathRightWaypoints = { "pathRightWaypoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAWaypointActor, pathRightWaypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pathRightWaypoints_MetaData), NewProp_pathRightWaypoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathUpWaypoints_Inner = { "pathUpWaypoints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAWaypointActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathUpWaypoints = { "pathUpWaypoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAWaypointActor, pathUpWaypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pathUpWaypoints_MetaData), NewProp_pathUpWaypoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathDownWaypoints_Inner = { "pathDownWaypoints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAWaypointActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathDownWaypoints = { "pathDownWaypoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAWaypointActor, pathDownWaypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pathDownWaypoints_MetaData), NewProp_pathDownWaypoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAWaypointActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathLeftWaypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathLeftWaypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathRightWaypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathRightWaypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathUpWaypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathUpWaypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathDownWaypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAWaypointActor_Statics::NewProp_pathDownWaypoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAWaypointActor_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AAWaypointActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAWaypointActor_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_AWaypointActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAWaypointActor, AAWaypointActor::StaticClass, TEXT("AAWaypointActor"), &Z_Registration_Info_UClass_AAWaypointActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAWaypointActor), 636986148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_AWaypointActor_h_743239545(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_AWaypointActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_AWaypointActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
