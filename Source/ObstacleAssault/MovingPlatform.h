// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//First custom variable
	UPROPERTY(EditAnywhere)
    int32 MyInt = 99;

	//custom variable
	UPROPERTY(EditAnywhere)
    int32 InputA = 0;

	//custom variable
	UPROPERTY(EditAnywhere)
    int32 InputB = 0;

	//custom variable
	UPROPERTY(EditAnywhere)
    int32 APlusB = 0;

	//Demo custom variable
	UPROPERTY(EditAnywhere)
	float MyFloat = 5.99;

	//Demo custom variable
	UPROPERTY(EditAnywhere)
	bool MyBool = true;

};
