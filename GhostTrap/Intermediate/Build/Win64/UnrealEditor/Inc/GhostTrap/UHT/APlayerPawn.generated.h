// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "APlayerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GHOSTTRAP_APlayerPawn_generated_h
#error "APlayerPawn.generated.h already included, missing '#pragma once' in APlayerPawn.h"
#endif
#define GHOSTTRAP_APlayerPawn_generated_h

#define FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAPlayerPawn(); \
	friend struct Z_Construct_UClass_AAPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AAPlayerPawn, AAIBasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GhostTrap"), NO_API) \
	DECLARE_SERIALIZER(AAPlayerPawn)


#define FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAPlayerPawn(AAPlayerPawn&&); \
	AAPlayerPawn(const AAPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAPlayerPawn) \
	NO_API virtual ~AAPlayerPawn();


#define FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_16_PROLOG
#define FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_19_INCLASS_NO_PURE_DECLS \
	FID_GhostTrap_Source_GhostTrap_APlayerPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOSTTRAP_API UClass* StaticClass<class AAPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GhostTrap_Source_GhostTrap_APlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
