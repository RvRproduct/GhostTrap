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
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAIBasePawn();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveLeftAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "APlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRightAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "APlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveUpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "APlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDownAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "APlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveLeftAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveRightAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveUpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveDownAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerPawn_Statics::NewProp_MoveLeftAction = { "MoveLeftAction", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerPawn, MoveLeftAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveLeftAction_MetaData), NewProp_MoveLeftAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerPawn_Statics::NewProp_MoveRightAction = { "MoveRightAction", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerPawn, MoveRightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRightAction_MetaData), NewProp_MoveRightAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerPawn_Statics::NewProp_MoveUpAction = { "MoveUpAction", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerPawn, MoveUpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveUpAction_MetaData), NewProp_MoveUpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPlayerPawn_Statics::NewProp_MoveDownAction = { "MoveDownAction", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPlayerPawn, MoveDownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDownAction_MetaData), NewProp_MoveDownAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAPlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerPawn_Statics::NewProp_MoveLeftAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerPawn_Statics::NewProp_MoveRightAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerPawn_Statics::NewProp_MoveUpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPlayerPawn_Statics::NewProp_MoveDownAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayerPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAPlayerPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIBasePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayerPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPlayerPawn_Statics::ClassParams = {
	&AAPlayerPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAPlayerPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayerPawn_Statics::PropPointers),
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
		{ Z_Construct_UClass_AAPlayerPawn, AAPlayerPawn::StaticClass, TEXT("AAPlayerPawn"), &Z_Registration_Info_UClass_AAPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPlayerPawn), 2126878159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_1653933188(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
