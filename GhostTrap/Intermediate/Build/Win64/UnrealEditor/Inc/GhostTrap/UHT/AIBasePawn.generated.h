// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIBasePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GHOSTTRAP_AIBasePawn_generated_h
#error "AIBasePawn.generated.h already included, missing '#pragma once' in AIBasePawn.h"
#endif
#define GHOSTTRAP_AIBasePawn_generated_h

#define FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIBasePawn(); \
	friend struct Z_Construct_UClass_AAIBasePawn_Statics; \
public: \
	DECLARE_CLASS(AAIBasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GhostTrap"), NO_API) \
	DECLARE_SERIALIZER(AAIBasePawn)


#define FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAIBasePawn(AAIBasePawn&&); \
	AAIBasePawn(const AAIBasePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIBasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIBasePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIBasePawn) \
	NO_API virtual ~AAIBasePawn();


#define FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_9_PROLOG
#define FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_GhostTrap_Source_GhostTrap_AIBasePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOSTTRAP_API UClass* StaticClass<class AAIBasePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GhostTrap_Source_GhostTrap_AIBasePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
