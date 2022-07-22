// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	startLocation = GetActorLocation();
	UE_LOG(LogTemp, Warning, TEXT("First Location: %s"), *startLocation.ToString());
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentLocation = GetActorLocation();

	currentLocation = currentLocation + (platformVelocity*DeltaTime); //*DeltaTime

	//UE_LOG(LogTemp, Warning, TEXT("Current Location: %s"), *currentLocation.ToString());
	//UE_LOG(LogTemp, Warning, TEXT("platformVelocity: %s"), *platformVelocity.ToString());

	SetActorLocation(currentLocation);

	float distanceMoved = FVector::Dist(startLocation, currentLocation);

	//UE_LOG(LogTemp, Warning, TEXT("Max Distance: %s"), *FString::SanitizeFloat(moveDistance));
	//UE_LOG(LogTemp, Warning, TEXT("Distance Moved: %s"), *FString::SanitizeFloat(distanceMoved));

	if (distanceMoved > moveDistance)
	{
		platformVelocity = -platformVelocity;
		startLocation = currentLocation;
		//UE_LOG(LogTemp, Warning, TEXT("platformVelocity: %s"), *platformVelocity.ToString());
	}
}

