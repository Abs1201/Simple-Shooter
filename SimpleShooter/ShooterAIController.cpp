// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"

void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();
}

void AShooterAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    MoveToActor(PlayerPawn, 400);

    // IF LineOfSight
        // MoveTo
        // SetFocus
    // ELSE
        //StopMovement
        //ClearFocus
    // if(LineOfSightTo(PlayerPawn)){
    //     MoveToActor(PlayerPawn, 400);
    //     SetFocus(PlayerPawn);
    // }
    // else{
    //     StopMovement();
    //     ClearFocus(EAIFocusPriority::Gameplay);
    // }
}
