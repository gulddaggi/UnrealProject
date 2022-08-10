// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STIFF_STAnimInstance_generated_h
#error "STAnimInstance.generated.h already included, missing '#pragma once' in STAnimInstance.h"
#endif
#define STIFF_STAnimInstance_generated_h

#define Stiff_Source_Stiff_STAnimInstance_h_15_SPARSE_DATA
#define Stiff_Source_Stiff_STAnimInstance_h_15_RPC_WRAPPERS
#define Stiff_Source_Stiff_STAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Stiff_Source_Stiff_STAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTAnimInstance(); \
	friend struct Z_Construct_UClass_USTAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USTAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Stiff"), NO_API) \
	DECLARE_SERIALIZER(USTAnimInstance)


#define Stiff_Source_Stiff_STAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSTAnimInstance(); \
	friend struct Z_Construct_UClass_USTAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USTAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Stiff"), NO_API) \
	DECLARE_SERIALIZER(USTAnimInstance)


#define Stiff_Source_Stiff_STAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTAnimInstance(USTAnimInstance&&); \
	NO_API USTAnimInstance(const USTAnimInstance&); \
public:


#define Stiff_Source_Stiff_STAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTAnimInstance(USTAnimInstance&&); \
	NO_API USTAnimInstance(const USTAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USTAnimInstance)


#define Stiff_Source_Stiff_STAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawnSpeed() { return STRUCT_OFFSET(USTAnimInstance, CurrentPawnSpeed); }


#define Stiff_Source_Stiff_STAnimInstance_h_12_PROLOG
#define Stiff_Source_Stiff_STAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stiff_Source_Stiff_STAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Stiff_Source_Stiff_STAnimInstance_h_15_SPARSE_DATA \
	Stiff_Source_Stiff_STAnimInstance_h_15_RPC_WRAPPERS \
	Stiff_Source_Stiff_STAnimInstance_h_15_INCLASS \
	Stiff_Source_Stiff_STAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stiff_Source_Stiff_STAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stiff_Source_Stiff_STAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Stiff_Source_Stiff_STAnimInstance_h_15_SPARSE_DATA \
	Stiff_Source_Stiff_STAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stiff_Source_Stiff_STAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	Stiff_Source_Stiff_STAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STIFF_API UClass* StaticClass<class USTAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stiff_Source_Stiff_STAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
