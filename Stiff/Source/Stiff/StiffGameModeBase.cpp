// Fill out your copyright notice in the Description page of Project Settings.

#include "StiffGameModeBase.h"
#include "STCharacter.h"
#include "STPlayerController.h"

AStiffGameModeBase::AStiffGameModeBase()
{
	DefaultPawnClass = ASTCharacter::StaticClass();
	PlayerControllerClass = ASTPlayerController::StaticClass();
}

void AStiffGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
}



