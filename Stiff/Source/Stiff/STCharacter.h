// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Stiff.h"
#include "GameFramework/Character.h"
#include "STCharacter.generated.h"

UCLASS()
class STIFF_API ASTCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASTCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = Mesh)
		USkeletalMeshComponent* ThirdMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzzleOffset;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ASTProjectile> ProjectileClass;


private:
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	UFUNCTION()
		void Fire();
};
