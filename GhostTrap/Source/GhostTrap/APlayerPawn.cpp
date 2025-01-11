// Created By Roberto Reynoso - RvRproduct

#include "APlayerPawn.h"

// Sets default values
AAPlayerPawn::AAPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (playerCurrentWaypoint != nullptr)
	{
		// Do nothing
	}
	else
	{
		playerCurrentWaypoint = nullptr;
	}
	
	playerNextWaypoint = nullptr;

}

// Called when the game starts or when spawned
void AAPlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	if (!CollisionComponent)
	{

		CollisionComponent = FindComponentByClass<UBoxComponent>();

		if (CollisionComponent)
		{
			UE_LOG(LogTemp, Display, TEXT("The Collision Component Found: %s"), *CollisionComponent->GetName());
			CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
			CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AAPlayerPawn::OnOverlapBegin);
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("The Collision Component Not Found"));
		}

	}
	
}

// Called every frame
void AAPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Binding Each Movement Direction
		EnhancedInputComponent->BindAction(MoveLeftAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::MoveLeft);
		EnhancedInputComponent->BindAction(MoveRightAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::MoveRight);
		EnhancedInputComponent->BindAction(MoveUpAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::MoveUp);
		EnhancedInputComponent->BindAction(MoveDownAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::MoveDown);
	}

}

void AAPlayerPawn::MoveLeft(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();

	float distanceBetweenOldWaypoints = INFINITY;
	FVector targetWaypointPosition = FVector().ZeroVector;

	if (InputValue != 0.0f)
	{
		for (AAWaypointActor* leftWaypoint : playerCurrentWaypoint->pathLeftWaypoints)
		{
			if (targetWaypointPosition == FVector().ZeroVector)
			{
				targetWaypointPosition = leftWaypoint->GetActorLocation();

				return;
			}

			float distanceBetweenNewWaypoints = FVector::Dist(playerCurrentWaypoint->GetActorLocation(), leftWaypoint->GetActorLocation());

			if (distanceBetweenOldWaypoints > distanceBetweenNewWaypoints)
			{
				targetWaypointPosition = leftWaypoint->GetActorLocation();

				distanceBetweenOldWaypoints = distanceBetweenNewWaypoints;
			}
		}
	}
}


void AAPlayerPawn::MoveRight(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();

	if (InputValue != 0.0f)
	{

	}
}

void AAPlayerPawn::MoveUp(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();

	if (InputValue != 0.0f)
	{

	}
}

void AAPlayerPawn::MoveDown(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();

	if (InputValue != 0.0f)
	{

	}
}

void AAPlayerPawn::OnOverlapBegin(UPrimitiveComponent* OverlapComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (AAWaypointActor* hitWaypointActor = Cast<AAWaypointActor>(OtherActor))
		{
			playerCurrentWaypoint = hitWaypointActor;
		}
	}
}

