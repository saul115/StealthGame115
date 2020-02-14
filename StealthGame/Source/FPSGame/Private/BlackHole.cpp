// Fill out your copyright notice in the Description page of Project Settings.


#include "BlackHole.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"


class UParticleSystem;
class USoundBase;

// Sets default values
ABlackHole::ABlackHole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CharacterComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Character Component CPP"));
	CharacterComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = CharacterComponent;

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Caspsule Component CPP"));
	CapsuleComponent->SetCapsuleRadius(100);
	CapsuleComponent->SetupAttachment(CharacterComponent);

	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this,&ABlackHole::CharacterOverlap);

	OuterSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Outer Sphere"));
	OuterSphere->SetSphereRadius(3000);
	OuterSphere->SetupAttachment(CharacterComponent);

}

// Called when the game starts or when spawned
void ABlackHole::BeginPlay()
{
	Super::BeginPlay();

	//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle115, GetActorLocation());
	//UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound115, GetActorLocation());
	BHPlayEffects();
	
}

void ABlackHole::BHPlayEffects()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle115, GetActorLocation());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound115, GetActorLocation());
}

void ABlackHole::CharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 BodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor)
	{
		OtherActor->Destroy();
	}
}

// Called every frame
void ABlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	BHPlayEffects();

	TArray<UPrimitiveComponent*> OverlappingComponents;
	OuterSphere->GetOverlappingComponents(OverlappingComponents);


	for (int32 i = 0;i<OverlappingComponents.Num();i++)
	{
		UPrimitiveComponent* PrimaryComponent = OverlappingComponents[i];
		if (PrimaryComponent && PrimaryComponent->IsSimulatingPhysics())
		{
			const float SphereRadius = OuterSphere->GetScaledSphereRadius();
			const float ForceStrenght = -3000;

			PrimaryComponent->AddRadialForce(GetActorLocation(), SphereRadius, ForceStrenght, ERadialImpulseFalloff::RIF_Constant, true);
		}
	}

}

