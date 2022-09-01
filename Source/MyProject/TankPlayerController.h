// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class ATankPawn;

/**
 * 
 */
UCLASS()
class MYPROJECT_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	ATankPawn* TankPawn;
	UPROPERTY()
	FVector MousePos;

public:
	ATankPlayerController();
	virtual void SetupInputComponent() override;
	FVector GetMousePos() { return MousePos; }
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void RotateRight(float AxisValue);
};
