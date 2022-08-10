// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STIFF_STPawn_generated_h
#error "STPawn.generated.h already included, missing '#pragma once' in STPawn.h"
#endif
#define STIFF_STPawn_generated_h

#define Stiff_Source_Stiff_STPawn_h_13_SPARSE_DATA
#define Stiff_Source_Stiff_STPawn_h_13_RPC_WRAPPERS
#define Stiff_Source_Stiff_STPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Stiff_Source_Stiff_STPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTPawn(); \
	friend struct Z_Construct_UClass_ASTPawn_Statics; \
public: \
	DECLARE_CLASS(ASTPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stiff"), NO_API) \
	DECLARE_SERIALIZER(ASTPawn)


#define Stiff_Source_Stiff_STPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASTPawn(); \
	friend struct Z_Construct_UClass_ASTPawn_Statics; \
public: \
	DECLARE_CLASS(ASTPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stiff"), NO_API) \
	DECLARE_SERIALIZER(ASTPawn)


#define Stiff_Source_Stiff_STPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTPawn(ASTPawn&&); \
	NO_API ASTPawn(const ASTPawn&); \
public:


#define Stiff_Source_Stiff_STPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTPawn(ASTPawn&&); \
	NO_API ASTPawn(const ASTPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTPawn)


#define Stiff_Source_Stiff_STPawn_h_13_PRIVATE_PROPERTY_OFFSET
#define Stiff_Source_Stiff_STPawn_h_10_PROLOG
#define Stiff_Source_Stiff_STPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stiff_Source_Stiff_STPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Stiff_Source_Stiff_STPawn_h_13_SPARSE_DATA \
	Stiff_Source_Stiff_STPawn_h_13_RPC_WRAPPERS \
	Stiff_Source_Stiff_STPawn_h_13_INCLASS \
	Stiff_Source_Stiff_STPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stiff_Source_Stiff_STPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stiff_Source_Stiff_STPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Stiff_Source_Stiff_STPawn_h_13_SPARSE_DATA \
	Stiff_Source_Stiff_STPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Stiff_Source_Stiff_STPawn_h_13_INCLASS_NO_PURE_DECLS \
	Stiff_Source_Stiff_STPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STIFF_API UClass* StaticClass<class ASTPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stiff_Source_Stiff_STPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
