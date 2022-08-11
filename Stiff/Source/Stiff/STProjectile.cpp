// Fill out your copyright notice in the Description page of Project Settings.


#include "STProjectile.h"
#include "STCharacter.h"

// Sets default values
ASTProjectile::ASTProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SPHERECOMPONENT"));
	CollisionComponent->InitSphereRadius(15.0f);
	RootComponent = CollisionComponent;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("PROJECTILEMOVEMENTCOMPONENT"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.3f;

	BulletProjectile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BULLET"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BULLET(TEXT("/Game/FPS_Weapon_Bundle/Weapons/Meshes/Ammunition/SM_Shell_762x51.SM_Shell_762x51"));
	if (SM_BULLET.Succeeded())
	{
		BulletProjectile->SetStaticMesh(SM_BULLET.Object);
	}
	BulletProjectile->SetupAttachment(CollisionComponent);
	BulletProjectile->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));


}

// Called when the game starts or when spawned
void ASTProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTProjectile::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

