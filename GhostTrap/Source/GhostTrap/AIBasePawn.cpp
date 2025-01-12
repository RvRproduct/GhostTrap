// Created By Roberto Reynoso - RvRproduct


#include "AIBasePawn.h"

// Sets default values
AAIBasePawn::AAIBasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAIBasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAIBasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIBasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAIBasePawn::Seek(FVector waypointPosition, float DeltaTime)
{
	float distanceToWaypoint = FVector::Dist(GetActorLocation(), waypointPosition);
	float ArrivalRadius = 5.0f;

	if (distanceToWaypoint <= ArrivalRadius)
	{
		currentVelocity = FVector::ZeroVector;

		SetActorLocation(waypointPosition);
		return;
	}

	FVector direction = (waypointPosition - GetActorLocation()).GetSafeNormal();
	currentVelocity = direction * maxSpeed;

	SetActorLocation(GetActorLocation() + currentVelocity * DeltaTime);
}

