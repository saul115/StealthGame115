// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

class USphereComponent;

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:

	//This is to indicate that the objective exist
	UPROPERTY(VisibleAnywhere, Category = "Compomnents")

	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere,Category="Compomnents")
	//It is to indicate a collision component
	USphereComponent* SphereComponent;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
	UParticleSystem* PickupFX;
		
	virtual void BeginPlay() override;

	void PlayEffects();

public:	
	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
