// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "STPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTPlayerController() {}
// Cross Module References
	STIFF_API UClass* Z_Construct_UClass_ASTPlayerController_NoRegister();
	STIFF_API UClass* Z_Construct_UClass_ASTPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Stiff();
// End Cross Module References
	void ASTPlayerController::StaticRegisterNativesASTPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASTPlayerController_NoRegister()
	{
		return ASTPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ASTPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_Stiff,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "STPlayerController.h" },
				{ "ModuleRelativePath", "STPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASTPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASTPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTPlayerController, 1435687678);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTPlayerController(Z_Construct_UClass_ASTPlayerController, &ASTPlayerController::StaticClass, TEXT("/Script/Stiff"), TEXT("ASTPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
