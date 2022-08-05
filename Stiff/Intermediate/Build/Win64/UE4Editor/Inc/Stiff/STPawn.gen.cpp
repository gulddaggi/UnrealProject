// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "STPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTPawn() {}
// Cross Module References
	STIFF_API UClass* Z_Construct_UClass_ASTPawn_NoRegister();
	STIFF_API UClass* Z_Construct_UClass_ASTPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Stiff();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void ASTPawn::StaticRegisterNativesASTPawn()
	{
	}
	UClass* Z_Construct_UClass_ASTPawn_NoRegister()
	{
		return ASTPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ASTPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Stiff,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "STPawn.h" },
				{ "ModuleRelativePath", "STPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "STPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASTPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
				{ "Category", "Camara" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "STPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASTPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArm_MetaData, ARRAY_COUNT(NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
				{ "Category", "Movement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "STPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement = { UE4CodeGen_Private::EPropertyClass::Object, "Movement", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASTPawn, Movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(NewProp_Movement_MetaData, ARRAY_COUNT(NewProp_Movement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "Visual" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "STPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASTPawn, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[] = {
				{ "Category", "Collision" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "STPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule = { UE4CodeGen_Private::EPropertyClass::Object, "Capsule", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASTPawn, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_Capsule_MetaData, ARRAY_COUNT(NewProp_Capsule_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Capsule,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASTPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASTPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTPawn, 2768783375);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTPawn(Z_Construct_UClass_ASTPawn, &ASTPawn::StaticClass, TEXT("/Script/Stiff"), TEXT("ASTPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
