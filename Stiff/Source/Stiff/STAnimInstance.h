// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Stiff.h"
#include "Animation/AnimInstance.h"
#include "STAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class STIFF_API USTAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	USTAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float CurrentPawnSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsInAir;

	
	
};
