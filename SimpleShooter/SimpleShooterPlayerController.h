// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SimpleShooterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ASimpleShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	//IMC
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowprivateAccess="true"));
	class UInputMappingContext* DefaultMappingContext;

};
