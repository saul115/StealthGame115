// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIEnemy.generated.h"

UCLASS()
class FPSGAME_API AAIEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIEnemy();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Component")
	class UPawnSensingComponent* AIPawn;

	UFUNCTION()
	void PawnSeen(APawn* SeenPawn);

	UFUNCTION()
	void HearNoise(APawn* NoiseInstigator, const FVector& Location, float Volume);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
