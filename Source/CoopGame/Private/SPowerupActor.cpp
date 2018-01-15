// Fill out your copyright notice in the Description page of Project Settings.

#include "SPowerupActor.h"
#include "Net/UnrealNetwork.h"


// Sets default values
ASPowerupActor::ASPowerupActor()
{ 	
	PowerupInterval = 0.0f;
	TotalNrOfTicks = 0;

	bIsPowerUpActive = false;

	SetReplicates(true);

}

/*Whenever we tick we increment and let blueprint handle is they want to
* then we check if the total number of ticks is bigger or equal to ticks processed
*/
void ASPowerupActor::OnTickPowerup()
{
	TicksProccessed++;

	OnPowerupTicked();

	if (TicksProccessed >= TotalNrOfTicks)
	{
		OnExpired();

		bIsPowerUpActive = false;
		OnRep_PowerupActive();

		// deletes the timer
		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
	}

}

void ASPowerupActor::OnRep_PowerupActive()
{
	OnPowerupStateChanged(bIsPowerUpActive);
}

/*this method will activate whenever the power up is picked and not when spawned*/
void ASPowerupActor::ActivatePowerup(AActor* ActiveFor)
{
	OnActivated(ActiveFor);

	bIsPowerUpActive = true;
	OnRep_PowerupActive();

	if (PowerupInterval > 0.0f)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &ASPowerupActor::OnTickPowerup,
			PowerupInterval, true);
	}
	else
	{
		OnTickPowerup();
	}

}

void ASPowerupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASPowerupActor, bIsPowerUpActive);
}