// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlackHole.generated.h"

UCLASS()
class FPSGAME_API ABlackHole : public AActor
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	ABlackHole();

protected:

	UPROPERTY(EditAnywhere, Category = "Character Mesh Component")
		class USkeletalMeshComponent* CharacterComponent;

	UPROPERTY(EditAnywhere, Category = "Caspsule Component")
		class UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere, Category = "Outer Sphere Component")
		class USphereComponent* OuterSphere;

	UPROPERTY(EditAnywhere, Category = "Character Particle")
		class UParticleSystem* Particle115;

	UPROPERTY(EditAnywhere, Category = "Character Sound")
		class USoundBase* Sound115;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void CharacterOverlap(UPrimitiveComponent* OverlappedComponent,AActor* OtherActor,UPrimitiveComponent* OtherComponent,int32 BodyIndex,bool bFromSweep,const FHitResult& SweepResult);

	void BHPlayEffects();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
