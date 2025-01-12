// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/AIBasePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBasePawn() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAIBasePawn();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAIBasePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Class AAIBasePawn
void AAIBasePawn::StaticRegisterNativesAAIBasePawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIBasePawn);
UClass* Z_Construct_UClass_AAIBasePawn_NoRegister()
{
	return AAIBasePawn::StaticClass();
}
struct Z_Construct_UClass_AAIBasePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIBasePawn.h" },
		{ "ModuleRelativePath", "AIBasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AIBasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AIBasePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_currentVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIBasePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIBasePawn_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIBasePawn, maxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxSpeed_MetaData), NewProp_maxSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAIBasePawn_Statics::NewProp_currentVelocity = { "currentVelocity", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIBasePawn, currentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentVelocity_MetaData), NewProp_currentVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIBasePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBasePawn_Statics::NewProp_maxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBasePawn_Statics::NewProp_currentVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBasePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIBasePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBasePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIBasePawn_Statics::ClassParams = {
	&AAIBasePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAIBasePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIBasePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBasePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIBasePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIBasePawn()
{
	if (!Z_Registration_Info_UClass_AAIBasePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIBasePawn.OuterSingleton, Z_Construct_UClass_AAIBasePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIBasePawn.OuterSingleton;
}
template<> GHOSTTRAP_API UClass* StaticClass<AAIBasePawn>()
{
	return AAIBasePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIBasePawn);
AAIBasePawn::~AAIBasePawn() {}
// End Class AAIBasePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIBasePawn, AAIBasePawn::StaticClass, TEXT("AAIBasePawn"), &Z_Registration_Info_UClass_AAIBasePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIBasePawn), 2735124335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_1523519123(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
