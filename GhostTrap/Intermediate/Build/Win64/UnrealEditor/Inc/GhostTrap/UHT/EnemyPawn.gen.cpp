// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhostTrap/EnemyPawn.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAIBasePawn();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAPlayerPawn_NoRegister();
GHOSTTRAP_API UClass* Z_Construct_UClass_AAWaypointActor_NoRegister();
GHOSTTRAP_API UClass* Z_Construct_UClass_AEnemyPawn();
GHOSTTRAP_API UClass* Z_Construct_UClass_AEnemyPawn_NoRegister();
GHOSTTRAP_API UEnum* Z_Construct_UEnum_GhostTrap_EnemyTypes();
UPackage* Z_Construct_UPackage__Script_GhostTrap();
// End Cross Module References

// Begin Enum EnemyTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EnemyTypes;
static UEnum* EnemyTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EnemyTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EnemyTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GhostTrap_EnemyTypes, (UObject*)Z_Construct_UPackage__Script_GhostTrap(), TEXT("EnemyTypes"));
	}
	return Z_Registration_Info_UEnum_EnemyTypes.OuterSingleton;
}
template<> GHOSTTRAP_API UEnum* StaticEnum<EnemyTypes>()
{
	return EnemyTypes_StaticEnum();
}
struct Z_Construct_UEnum_GhostTrap_EnemyTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
		{ "Random.Name", "EnemyTypes::Random" },
		{ "TargetPlayer.Name", "EnemyTypes::TargetPlayer" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EnemyTypes::Random", (int64)EnemyTypes::Random },
		{ "EnemyTypes::TargetPlayer", (int64)EnemyTypes::TargetPlayer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GhostTrap_EnemyTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GhostTrap,
	nullptr,
	"EnemyTypes",
	"EnemyTypes",
	Z_Construct_UEnum_GhostTrap_EnemyTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GhostTrap_EnemyTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GhostTrap_EnemyTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GhostTrap_EnemyTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GhostTrap_EnemyTypes()
{
	if (!Z_Registration_Info_UEnum_EnemyTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EnemyTypes.InnerSingleton, Z_Construct_UEnum_GhostTrap_EnemyTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EnemyTypes.InnerSingleton;
}
// End Enum EnemyTypes

// Begin Class AEnemyPawn Function OnOverlapBegin
struct Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics
{
	struct EnemyPawn_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlapComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPawn_eventOnOverlapBegin_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapComponent_MetaData), NewProp_OverlapComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPawn_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPawn_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPawn_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((EnemyPawn_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyPawn_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPawn_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_OverlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyPawn, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::EnemyPawn_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::EnemyPawn_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPawn::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AEnemyPawn Function OnOverlapBegin

// Begin Class AEnemyPawn
void AEnemyPawn::StaticRegisterNativesAEnemyPawn()
{
	UClass* Class = AEnemyPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &AEnemyPawn::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_allWaypoints_MetaData[] = {
		{ "Category", "All Waypoints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All Waypoints\n" },
#endif
		{ "ModuleRelativePath", "EnemyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All Waypoints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentWaypoint_MetaData[] = {
		{ "Category", "Current Waypoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For The Seek\n" },
#endif
		{ "ModuleRelativePath", "EnemyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For The Seek" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nextWaypoint_MetaData[] = {
		{ "Category", "Next Waypoint" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerPawn_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enemyType_MetaData[] = {
		{ "Category", "Enemy Type" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponentReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_allWaypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_allWaypoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_currentWaypoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_nextWaypoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerPawn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_enemyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_enemyType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponentReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyPawn_OnOverlapBegin, "OnOverlapBegin" }, // 3032958053
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_allWaypoints_Inner = { "allWaypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAWaypointActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_allWaypoints = { "allWaypoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPawn, allWaypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_allWaypoints_MetaData), NewProp_allWaypoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_currentWaypoint = { "currentWaypoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPawn, currentWaypoint), Z_Construct_UClass_AAWaypointActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentWaypoint_MetaData), NewProp_currentWaypoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_nextWaypoint = { "nextWaypoint", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPawn, nextWaypoint), Z_Construct_UClass_AAWaypointActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nextWaypoint_MetaData), NewProp_nextWaypoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_playerPawn = { "playerPawn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPawn, playerPawn), Z_Construct_UClass_AAPlayerPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerPawn_MetaData), NewProp_playerPawn_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_enemyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_enemyType = { "enemyType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPawn, enemyType), Z_Construct_UEnum_GhostTrap_EnemyTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enemyType_MetaData), NewProp_enemyType_MetaData) }; // 756104053
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPawn_Statics::NewProp_CollisionComponentReference = { "CollisionComponentReference", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPawn, CollisionComponentReference), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponentReference_MetaData), NewProp_CollisionComponentReference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_allWaypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_allWaypoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_currentWaypoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_nextWaypoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_playerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_enemyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_enemyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPawn_Statics::NewProp_CollisionComponentReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AEnemyPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPawn_Statics::PropPointers),
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EnemyTypes_StaticEnum, TEXT("EnemyTypes"), &Z_Registration_Info_UEnum_EnemyTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 756104053U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyPawn, AEnemyPawn::StaticClass, TEXT("AEnemyPawn"), &Z_Registration_Info_UClass_AEnemyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyPawn), 617194722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_15758508(TEXT("/Script/GhostTrap"),
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
