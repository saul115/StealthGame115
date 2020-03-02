// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaunchPad.generated.h"

UCLASS()
class FPSGAME_API ALaunchPad : public AActor
{
	GENERATED_BODY()


	
public:	

	UPROPERTY(VisibleAnywhere, Category = "Box Component")
		class UBoxComponent* Box115;

	UPROPERTY(VisibleAnywhere, Category = "Mesh Component")
		UStaticMeshComponent* Mesh115;

	UPROPERTY(EditDefaultsOnly, Category = "Particle")
		class UParticleSystem* Particle115;

	UPROPERTY(EditDefaultsOnly, Category = "Sound Effect")
		class USoundBase* Sound115;

	UFUNCTION()
		void OverlappedLaunchPad(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditInstanceOnly, Category = "Launch Pad")
		float LaunchStrength;

	UPROPERTY(EditInstanceOnly, Category = "Launch Pad")
		float LaunchPitchAngle;

	// Sets default values for this actor's properties
	ALaunchPad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
