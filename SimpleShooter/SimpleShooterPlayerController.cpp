// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleShooterPlayerController.h"
#include "EnhancedInputSubsystems.h"

void ASimpleShooterPlayerController::BeginPlay()
{
    //Add Input Mapping Context
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->AddMappingContext(DefaultMappingContext, 0);
    }
}
