// Fill out your copyright notice in the Description page of Project Settings.

#include "STPawn.h"


// Sets default values
ASTPawn::ASTPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MESH"));
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	RootComponent = Capsule;
	Mesh->SetupAttachment(Capsule);
	SpringArm->SetupAttachment(Capsule);
	Camera->SetupAttachment(SpringArm);

	Capsule->SetCapsuleHalfHeight(88.0f);
	Capsule->SetCapsuleRadius(34.0f);
	Mesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	SpringArm->TargetArmLength = 0.0;
	SpringArm->SetRelativeLocation(FVector(10.0f, 0.0f, 60.0f));
	SpringArm->SetRelativeRotation(FRotator(-10.0f, 0.0f, 0.0f));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_MANNEQUIN(TEXT("/Game/Man/Demo/Mesh/SK_Mannequin.SK_Mannequin"));
	if (SK_MANNEQUIN.Succeeded())
	{
		Mesh->SetSkeletalMesh(SK_MANNEQUIN.Object);
	}
}

// Called when the game starts or when spawned
void ASTPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASTPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASTPawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ASTPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

