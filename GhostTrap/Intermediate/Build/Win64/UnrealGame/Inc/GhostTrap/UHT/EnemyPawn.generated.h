// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GHOSTTRAP_EnemyPawn_generated_h
#error "EnemyPawn.generated.h already included, missing '#pragma once' in EnemyPawn.h"
#endif
#define GHOSTTRAP_EnemyPawn_generated_h

#define FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyPawn(); \
	friend struct Z_Construct_UClass_AEnemyPawn_Statics; \
public: \
	DECLARE_CLASS(AEnemyPawn, AAIBasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GhostTrap"), NO_API) \
	DECLARE_SERIALIZER(AEnemyPawn)


#define FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyPawn(AEnemyPawn&&); \
	AEnemyPawn(const AEnemyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyPawn) \
	NO_API virtual ~AEnemyPawn();


#define FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_32_PROLOG
#define FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_35_INCLASS_NO_PURE_DECLS \
	FID_GhostTrap_Source_GhostTrap_EnemyPawn_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOSTTRAP_API UClass* StaticClass<class AEnemyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GhostTrap_Source_GhostTrap_EnemyPawn_h


#define FOREACH_ENUM_ENEMYTYPES(op) \
	op(EnemyTypes::Random) \
	op(EnemyTypes::TargetPlayer) 

enum class EnemyTypes : uint8;
template<> struct TIsUEnumClass<EnemyTypes> { enum { Value = true }; };
template<> GHOSTTRAP_API UEnum* StaticEnum<EnemyTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
