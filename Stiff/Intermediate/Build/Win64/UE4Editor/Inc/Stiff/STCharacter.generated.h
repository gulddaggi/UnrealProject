// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STIFF_STCharacter_generated_h
#error "STCharacter.generated.h already included, missing '#pragma once' in STCharacter.h"
#endif
#define STIFF_STCharacter_generated_h

#define Stiff_Source_Stiff_STCharacter_h_12_SPARSE_DATA
#define Stiff_Source_Stiff_STCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire);


#define Stiff_Source_Stiff_STCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define Stiff_Source_Stiff_STCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTCharacter(); \
	friend struct Z_Construct_UClass_ASTCharacter_Statics; \
public: \
	DECLARE_CLASS(ASTCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stiff"), NO_API) \
	DECLARE_SERIALIZER(ASTCharacter)


#define Stiff_Source_Stiff_STCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASTCharacter(); \
	friend struct Z_Construct_UClass_ASTCharacter_Statics; \
public: \
	DECLARE_CLASS(ASTCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stiff"), NO_API) \
	DECLARE_SERIALIZER(ASTCharacter)


#define Stiff_Source_Stiff_STCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTCharacter(ASTCharacter&&); \
	NO_API ASTCharacter(const ASTCharacter&); \
public:


#define Stiff_Source_Stiff_STCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTCharacter(ASTCharacter&&); \
	NO_API ASTCharacter(const ASTCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTCharacter)


#define Stiff_Source_Stiff_STCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define Stiff_Source_Stiff_STCharacter_h_9_PROLOG
#define Stiff_Source_Stiff_STCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stiff_Source_Stiff_STCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Stiff_Source_Stiff_STCharacter_h_12_SPARSE_DATA \
	Stiff_Source_Stiff_STCharacter_h_12_RPC_WRAPPERS \
	Stiff_Source_Stiff_STCharacter_h_12_INCLASS \
	Stiff_Source_Stiff_STCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stiff_Source_Stiff_STCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stiff_Source_Stiff_STCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Stiff_Source_Stiff_STCharacter_h_12_SPARSE_DATA \
	Stiff_Source_Stiff_STCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Stiff_Source_Stiff_STCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Stiff_Source_Stiff_STCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STIFF_API UClass* StaticClass<class ASTCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stiff_Source_Stiff_STCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
