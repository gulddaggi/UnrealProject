// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STIFF_STPlayerController_generated_h
#error "STPlayerController.generated.h already included, missing '#pragma once' in STPlayerController.h"
#endif
#define STIFF_STPlayerController_generated_h

#define Stiff_Source_Stiff_STPlayerController_h_15_RPC_WRAPPERS
#define Stiff_Source_Stiff_STPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Stiff_Source_Stiff_STPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTPlayerController(); \
	friend STIFF_API class UClass* Z_Construct_UClass_ASTPlayerController(); \
public: \
	DECLARE_CLASS(ASTPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Stiff"), NO_API) \
	DECLARE_SERIALIZER(ASTPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Stiff_Source_Stiff_STPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTPlayerController(); \
	friend STIFF_API class UClass* Z_Construct_UClass_ASTPlayerController(); \
public: \
	DECLARE_CLASS(ASTPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Stiff"), NO_API) \
	DECLARE_SERIALIZER(ASTPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Stiff_Source_Stiff_STPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTPlayerController(ASTPlayerController&&); \
	NO_API ASTPlayerController(const ASTPlayerController&); \
public:


#define Stiff_Source_Stiff_STPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTPlayerController(ASTPlayerController&&); \
	NO_API ASTPlayerController(const ASTPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTPlayerController)


#define Stiff_Source_Stiff_STPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define Stiff_Source_Stiff_STPlayerController_h_12_PROLOG
#define Stiff_Source_Stiff_STPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stiff_Source_Stiff_STPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Stiff_Source_Stiff_STPlayerController_h_15_RPC_WRAPPERS \
	Stiff_Source_Stiff_STPlayerController_h_15_INCLASS \
	Stiff_Source_Stiff_STPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stiff_Source_Stiff_STPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stiff_Source_Stiff_STPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Stiff_Source_Stiff_STPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stiff_Source_Stiff_STPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Stiff_Source_Stiff_STPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stiff_Source_Stiff_STPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
