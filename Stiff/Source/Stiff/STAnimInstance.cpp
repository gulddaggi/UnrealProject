// Fill out your copyright notice in the Description page of Project Settings.

#include "STAnimInstance.h"

USTAnimInstance::USTAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
}

void USTAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}


