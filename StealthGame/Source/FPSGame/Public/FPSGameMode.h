// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSGameMode.generated.h"

class APawn;

UCLASS()
class AFPSGameMode : public AGameModeBase
{
	GENERATED_BODY()



public:

	AFPSGameMode();

	void CompleteMission(APawn* InstigatorPawn);

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void MissionCompleted(APawn* InstigatorPawn);


};



