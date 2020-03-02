// Fill out your copyright notice in the Description page of Project Settings.


#include "AIEnemy.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
AAIEnemy::AAIEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AIPawn = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("AI Pawn Component"));

	AIPawn->OnSeePawn.AddDynamic(this, &AAIEnemy::PawnSeen);
	AIPawn->OnHearNoise.AddDynamic(this, &AAIEnemy::HearNoise);

}

// Called when the game starts or when spawned
void AAIEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAIEnemy::PawnSeen(APawn* SeenPawn)
{
	if (SeenPawn == nullptr)
	{
		return;
	}

	DrawDebugSphere(GetWorld(),SeenPawn->GetActorLocation(),15.0f,20,FColor::Green,true,20.0f);
}

void AAIEnemy::HearNoise(APawn* NoiseInstigator, const FVector& Location, float Volume)
{
	if (NoiseInstigator == nullptr)
	{
		return;
	}

	DrawDebugSphere(GetWorld(), Location, 32.f, 12, FColor::Orange, false, 10.f);
}

// Called every frame
void AAIEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

