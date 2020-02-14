// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtractZone.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FPSCharacter.h"
#include "LogMacros.h"

// Sets default values
AExtractZone::AExtractZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EXBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Extraction Zone Box CPP"));
	EXBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	EXBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	EXBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	EXBox->SetBoxExtent(FVector(300.0f));
	
	RootComponent = EXBox;

	EXBox->SetHiddenInGame(false);

	EXBox->OnComponentBeginOverlap.AddDynamic(this,&AExtractZone::EXOverlapping);


	EXMaterial = CreateDefaultSubobject<UDecalComponent>(TEXT("Extraction Zone Material CPP"));
	EXMaterial->DecalSize = FVector(300.0f);
	EXMaterial->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AExtractZone::BeginPlay()
{
	Super::BeginPlay();
	
}

void AExtractZone::PlayEffects()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle115, GetActorLocation());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound115, GetActorLocation());
}

void AExtractZone::EXOverlapping(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("You have been arrive to Exraction Zone"));
}

// Called every frame
void AExtractZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	PlayEffects();
}

