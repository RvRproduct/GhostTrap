// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PowerUp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GHOSTTRAP_PowerUp_generated_h
#error "PowerUp.generated.h already included, missing '#pragma once' in PowerUp.h"
#endif
#define GHOSTTRAP_PowerUp_generated_h

#define FID_GhostTrap_Source_GhostTrap_PowerUp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_GhostTrap_Source_GhostTrap_PowerUp_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerUp(); \
	friend struct Z_Construct_UClass_APowerUp_Statics; \
public: \
	DECLARE_CLASS(APowerUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GhostTrap"), NO_API) \
	DECLARE_SERIALIZER(APowerUp)


#define FID_GhostTrap_Source_GhostTrap_PowerUp_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APowerUp(APowerUp&&); \
	APowerUp(const APowerUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerUp) \
	NO_API virtual ~APowerUp();


#define FID_GhostTrap_Source_GhostTrap_PowerUp_h_11_PROLOG
#define FID_GhostTrap_Source_GhostTrap_PowerUp_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GhostTrap_Source_GhostTrap_PowerUp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GhostTrap_Source_GhostTrap_PowerUp_h_14_INCLASS_NO_PURE_DECLS \
	FID_GhostTrap_Source_GhostTrap_PowerUp_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOSTTRAP_API UClass* StaticClass<class APowerUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GhostTrap_Source_GhostTrap_PowerUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
