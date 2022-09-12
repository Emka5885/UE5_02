// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RollaBallGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE5_02_API ARollaBallGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:

	int32 ItemsCollected = 0;
	int32 ItemsInLevel = 0;

	// TODO - Implement Widget Variables

	virtual void BeginPlay() override;

	void UpdateItemText();

public:

	void ItemCollected();
};