// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpikeTrap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GHOSTTRAP_SpikeTrap_generated_h
#error "SpikeTrap.generated.h already included, missing '#pragma once' in SpikeTrap.h"
#endif
#define GHOSTTRAP_SpikeTrap_generated_h

#define FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpikeTrap(); \
	friend struct Z_Construct_UClass_ASpikeTrap_Statics; \
public: \
	DECLARE_CLASS(ASpikeTrap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GhostTrap"), NO_API) \
	DECLARE_SERIALIZER(ASpikeTrap)


#define FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpikeTrap(ASpikeTrap&&); \
	ASpikeTrap(const ASpikeTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpikeTrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpikeTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpikeTrap) \
	NO_API virtual ~ASpikeTrap();


#define FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_9_PROLOG
#define FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_12_INCLASS_NO_PURE_DECLS \
	FID_GhostTrap_Source_GhostTrap_SpikeTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOSTTRAP_API UClass* StaticClass<class ASpikeTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GhostTrap_Source_GhostTrap_SpikeTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
