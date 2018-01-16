// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameMode.generated.h"

enum class EWaveState : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, VictimActor, AActor*, KilledActor, AController*, KillerController); // Killed Actor, Killer actor


/**
 * 
 */
UCLASS()
class COOPGAME_API ASGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	// A timer for bot spawning 
	FTimerHandle TimerHandle_BotSpawner;

	// A timer for staring the next wave
	FTimerHandle TimerHandle_NextWaveStart;

	// Bots to spawn in current wave
	int32 NrOfBotsToSpawn;

	// This will be incremented every time a wave starts
	int32 WaveCount;
	
	// This will handle the time between each wave
	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
	float TimeBetweenWaves;
	
protected:

	// Hook for BP to spawn a single bot
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void SpawnNewBot();

	void SpawnBotTimerElapsed();

	// Start spawning bots
	void StartWave();

	// Stop spawning bots
	void Endwave();

	// Set timer for next start wave
	void PrepareForNextWave();

	// Checks whether or not any bots are alive
	void CheckWaveState();

	// Checks if any players are alive
	void CheckAnyPlayerAlive();

	// Handles the call to game over if players die
	void GameOver();

	void SetWaveState(EWaveState NewState);

	/*A Function that will handle the respawn logic*/
	void RestartDeadPlayers();

public:

	ASGameMode();

	/*Transistions to calls BeginPlay on actors*/
	virtual void StartPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(BlueprintAssignable, Category = "GameMode")
	FOnActorKilled OnActorKilled;
	
};
