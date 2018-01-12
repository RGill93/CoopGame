// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class ASWeapon;

UCLASS()
class COOPGAME_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	ASCharacter();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*Sets up the players movement input*/
	void MoveForward(float Value);

	/*sets up players movement*/
	void MoveRight(float Value);

	/*Function for the players initial crouch movement*/
	void BeginCrouch();

	/*Function for the players crouch movement*/
	void EndCrouch();
	
	/*Creating a Camera component*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;

	/*Creating a Camera component*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	/*Checks if the player is aiming down sights*/
	bool bWantsToZoom;

	/*Allows the player to set there values in the editor*/
	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float ZoomedFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Player", meta =(ClampMin = 0.1, ClampMax = 100))
	float ZoomInterpSpeed;

	/*Default FOV set during begin play*/	
	float DefaultFOV;

	/*Function for when the begin begins zooming*/
	void BeginZoom();

	/*Function for when the begin ends zooming*/
	void EndZoom();

	ASWeapon* CurrentWeapon;

	/*Function for player fire*/
	void StartFire();

	void StopFire();

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<ASWeapon> StarterWeaponClass;

	UPROPERTY(VisibleDefaultsOnly, Category = "Player")
	FName WeaponAttachSocketName;
	

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/**
	 * @return players eye location
	 */
	virtual FVector GetPawnViewLocation() const override;
		
};
