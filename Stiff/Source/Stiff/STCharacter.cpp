// Fill out your copyright notice in the Description page of Project Settings.

#include "STCharacter.h"


// Sets default values
ASTCharacter::ASTCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	ThirdMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("THIRDMESH"));

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -60.0f),
		FRotator(0.0f, -90.0f, 0.0f));
	ThirdMesh->SetOwnerNoSee(true);

	Camera->SetupAttachment(GetCapsuleComponent());
	Camera->SetRelativeLocation(FVector(0.0f, 0.0f, BaseEyeHeight));
	Camera->bUsePawnControlRotation = true;

	GetMesh()->SetupAttachment(GetCapsuleComponent());
	ThirdMesh->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	GetMesh()->bCastDynamicShadow = false;
	GetMesh()->CastShadow = false;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_HANDMESH(TEXT("/Game/Man/Mesh/Parts/SK_Man_Arms.SK_Man_Arms"));
	if (SK_HANDMESH.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_HANDMESH.Object);
	}

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_MANNEQUIN(TEXT("/Game/Man/Demo/Mesh/SK_Mannequin.SK_Mannequin"));
	if (SK_MANNEQUIN.Succeeded())
	{
		ThirdMesh->SetSkeletalMesh(SK_MANNEQUIN.Object);
	}

	//스켈레탈 메시 컴포넌트에 애니메이션 블루프린트 클래스를 등록
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance> PawnAnimInstance(TEXT("/Game/Man/Demo/Animations/PawnAnimBlueprint.PawnAnimBlueprint_C"));
	if (PawnAnimInstance.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(PawnAnimInstance.Class);
	}

	GetCharacterMovement()->JumpZVelocity = 550.0f;
}

// Called when the game starts or when spawned
void ASTCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASTCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &ASTCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ASTCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ASTCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ASTCharacter::Turn);
	
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ASTCharacter::Jump);
}

void ASTCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void ASTCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}

void ASTCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

void ASTCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}
