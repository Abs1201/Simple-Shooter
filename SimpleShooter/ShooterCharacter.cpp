// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
// #include "EnhancedInputComponent.h"
// #include "EnhancedInputSubsystems.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// void AShooterCharacter::Move(const FInputActionValue &Value)
// {
// 	//input is a Vector2D
// 	FVector2D MovementVector = Value.Get<FVector2D>();

// 	if(Controller != nullptr){
// 		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
// 		AddMovementInput(GetActorRightVector(), MovementVector.X);
// 	}
// }

// void AShooterCharacter::Look(const FInputActionValue &Value)
// {
// 	//input is a Vector2D
// 	FVector2D LookAxisVector = Value.Get<FVector2D>();

// 	if(Controller != nullptr){
// 		AddControllerYawInput(LookAxisVector.X);/Script/Engine.World'/Game/BigStarStation/Maps/Map_BigStarStation.Map_BigStarStation
// 		AddControllerPitchInput(LookAxisVector.Y);
// 	}
// }

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// if(UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)){
	// 	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AShooterCharacter::Move);
	// 	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AShooterCharacter::Look);

	// 	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
	// 	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping)
	// }
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AShooterCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"),this, &AShooterCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &AShooterCharacter::LookRight);

	// PlayerInputComponent->BindAction(TEXT("Jump"), ETriggerEvent::Triggered, this, &ACharacter::Jump);
	// PlayerInputComponent->BindAction(TEXT(""))
}



void AShooterCharacter::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

void AShooterCharacter::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

void AShooterCharacter::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

void AShooterCharacter::LookRight(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}
