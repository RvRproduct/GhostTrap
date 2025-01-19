// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/CollectCounterWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectCounterWidget() {}

// Begin Cross Module References
GHOSTTRAP_API UClass* Z_Construct_UClass_UCollectCounterWidget();
GHOSTTRAP_API UClass* Z_Construct_UClass_UCollectCounterWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Class UCollectCounterWidget
void UCollectCounterWidget::StaticRegisterNativesUCollectCounterWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollectCounterWidget);
UClass* Z_Construct_UClass_UCollectCounterWidget_NoRegister()
{
	return UCollectCounterWidget::StaticClass();
}
struct Z_Construct_UClass_UCollectCounterWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CollectCounterWidget.h" },
		{ "ModuleRelativePath", "CollectCounterWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectCounterWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCollectCounterWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GhostTrap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectCounterWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollectCounterWidget_Statics::ClassParams = {
	&UCollectCounterWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectCounterWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollectCounterWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollectCounterWidget()
{
	if (!Z_Registration_Info_UClass_UCollectCounterWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollectCounterWidget.OuterSingleton, Z_Construct_UClass_UCollectCounterWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollectCounterWidget.OuterSingleton;
}
template<> GHOSTTRAP_API UClass* StaticClass<UCollectCounterWidget>()
{
	return UCollectCounterWidget::StaticClass();
}
UCollectCounterWidget::UCollectCounterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectCounterWidget);
UCollectCounterWidget::~UCollectCounterWidget() {}
// End Class UCollectCounterWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_CollectCounterWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCollectCounterWidget, UCollectCounterWidget::StaticClass, TEXT("UCollectCounterWidget"), &Z_Registration_Info_UClass_UCollectCounterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollectCounterWidget), 2944452423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_CollectCounterWidget_h_574498160(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_CollectCounterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_CollectCounterWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
