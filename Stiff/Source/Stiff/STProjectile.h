// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Stiff.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "STProjectile.generated.h"

UCLASS()
class STIFF_API ASTProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		USphereComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(VisibleAnywhere, Category = Mesh)
		UStaticMeshComponent* BulletProjectile;

	void FireInDirection(const FVector& ShootDirection);

};
