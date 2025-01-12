// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeyCollectible.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GHOSTTRAP_KeyCollectible_generated_h
#error "KeyCollectible.generated.h already included, missing '#pragma once' in KeyCollectible.h"
#endif
#define GHOSTTRAP_KeyCollectible_generated_h

#define FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeyCollectible(); \
	friend struct Z_Construct_UClass_AKeyCollectible_Statics; \
public: \
	DECLARE_CLASS(AKeyCollectible, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GhostTrap"), NO_API) \
	DECLARE_SERIALIZER(AKeyCollectible)


#define FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKeyCollectible(AKeyCollectible&&); \
	AKeyCollectible(const AKeyCollectible&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyCollectible); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyCollectible); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeyCollectible) \
	NO_API virtual ~AKeyCollectible();


#define FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_9_PROLOG
#define FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_12_INCLASS_NO_PURE_DECLS \
	FID_GhostTrap_Source_GhostTrap_KeyCollectible_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOSTTRAP_API UClass* StaticClass<class AKeyCollectible>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GhostTrap_Source_GhostTrap_KeyCollectible_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
