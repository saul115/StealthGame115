// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExtractZone.generated.h"

UCLASS()
class FPSGAME_API AExtractZone : public AActor
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	AExtractZone();

protected:

	UPROPERTY(VisibleAnywhere, Category = "Extraction Zone Material")
		class UDecalComponent* EXMaterial;

	UPROPERTY(VisibleAnywhere, Category = "Extraction Zone Box")
		class UBoxComponent* EXBox;

	UPROPERTY(EditDefaultsOnly, Category = "Particle Effect")
		class UParticleSystem* Particle115;

	UPROPERTY(EditDefaultsOnly, Category = "Sound Effect")
		class USoundBase* Sound115;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PlayEffects();

	UFUNCTION()
		void EXOverlapping(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
