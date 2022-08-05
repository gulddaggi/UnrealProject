// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Stiff.h"
#include "GameFramework/GameModeBase.h"
#include "StiffGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class STIFF_API AStiffGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AStiffGameModeBase();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	
	
};
