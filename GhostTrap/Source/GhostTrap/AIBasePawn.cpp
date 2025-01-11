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

void AAIBasePawn::Seek(FVector targetPosition, float DeltaTime)
{
	FVector targetVelocity = (targetPosition - GetActorLocation()).GetSafeNormal() * maxSpeed;

	FVector steeringForce = targetVelocity - currentVelocity;

	if (steeringForce.Size() > maxForce)
	{
		steeringForce = steeringForce.GetClampedToMaxSize(maxForce);
	}

	currentVelocity += steeringForce * DeltaTime;

	if (currentVelocity.Size() > maxSpeed)
	{
		currentVelocity + currentVelocity.GetClampedToMaxSize(maxSpeed);
	}
}

