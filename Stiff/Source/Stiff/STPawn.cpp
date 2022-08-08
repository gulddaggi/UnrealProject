// Fill out your copyright notice in the Description page of Project Settings.

#include "STPawn.h"


// Sets default values
ASTPawn::ASTPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//폰에서 사용할 컴포넌트들
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
	SpringArm->SetRelativeLocation(FVector(25.0f, 0.0f, 70.0f));
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	//마네킹 오브젝트 생성
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_MANNEQUIN(TEXT("/Game/Man/Demo/Mesh/SK_Mannequin.SK_Mannequin"));
	if (SK_MANNEQUIN.Succeeded())
	{
		Mesh->SetSkeletalMesh(SK_MANNEQUIN.Object);
	}

	//스켈레탈 메시 컴포넌트에 애니메이션 블루프린트 클래스를 등록
	Mesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance> PawnAnimInstance(TEXT("/Game/Man/Demo/Animations/PawnAnimBlueprint.PawnAnimBlueprint_C"));
	if (PawnAnimInstance.Succeeded())
	{
		Mesh->SetAnimInstanceClass(PawnAnimInstance.Class);
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

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &ASTPawn::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ASTPawn::LeftRight);

}

void ASTPawn::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void ASTPawn::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}

void ASTPawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ASTPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

