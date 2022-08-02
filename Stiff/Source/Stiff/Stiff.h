// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(Stiff, Log, All);

#define STILOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define STILOG_S(Verbosity) UE_LOG(Stiff, Verbosity, TEXT("%s"), *STILOG_CALLINFO)
#define STILOG(Verbosity, Format, ...) UE_LOG(Stiff, Verbosity, TEXT("%s %s"),*STILOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))
