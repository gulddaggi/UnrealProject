// Fill out your copyright notice in the Description page of Project Settings.

#include "StiffGameModeBase.h"
#include "STPawn.h"
#include "STPlayerController.h"

AStiffGameModeBase::AStiffGameModeBase()
{
	DefaultPawnClass = ASTPawn::StaticClass();
	PlayerControllerClass = ASTPlayerController::StaticClass();
}

void AStiffGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
}



