// Fill out your copyright notice in the Description page of Project Settings.


#include "LaunchPad.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"

// Sets default values
ALaunchPad::ALaunchPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box115 = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	Box115->SetBoxExtent(FVector(50,50,20));
	RootComponent = Box115;

	Mesh115 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	Mesh115->SetupAttachment(RootComponent);

	//Bind Event
	Box115->OnComponentBeginOverlap.AddDynamic(this, &ALaunchPad::OverlappedLaunchPad);

	LaunchStrength = 1600;
	LaunchPitchAngle = 80.0f;



}

// Called when the game starts or when spawned
void ALaunchPad::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALaunchPad::OverlappedLaunchPad(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FRotator LaunchAngleDirection = GetActorRotation();
	LaunchAngleDirection.Pitch += LaunchPitchAngle;
	FVector LaunchDirection = LaunchAngleDirection.Vector() * LaunchStrength;

	ACharacter* myCharacter = Cast<ACharacter>(OtherActor);
	if (myCharacter)
	{
		myCharacter->LaunchCharacter(LaunchDirection, false, false);
	}

	else if (OtherComp && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulse(LaunchDirection, NAME_None, false);
	}
}



// Called every frame
void ALaunchPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

