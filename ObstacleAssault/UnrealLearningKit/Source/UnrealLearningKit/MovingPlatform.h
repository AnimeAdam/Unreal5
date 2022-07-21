// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UNREALLEARNINGKIT_API AMovingPlatform : public AActor
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



	UPROPERTY(EditAnywhere)
	int32 myInt = 99;

	UPROPERTY(EditAnywhere)
	int32 myFloat= 5.99;

	UPROPERTY(EditAnywhere)
	int32 myBool = true;

	UPROPERTY(EditAnywhere)
	FVector myVectorFloat = FVector(14620.000000, -12220.000000, 4876.000000); //typedef UE::Math::TVector< double > FVector

	FVector startLocation;
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	FVector platformVelocity = FVector(100, 0, 0); //typedef UE::Math::TVector< double > FVector
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	float moveDistance = 100;
};