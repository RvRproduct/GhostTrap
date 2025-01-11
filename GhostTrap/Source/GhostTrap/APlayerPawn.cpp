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

	if (playerCurrentWaypoint != nullptr)
	{
		this->SetActorLocation(playerCurrentWaypoint->GetActorLocation());
	}

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

	Seek(currentVelocity, DeltaTime);

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

void AAPlayerPawn::ApplyWaypointMovement(TArray<AAWaypointActor*> pathDirectionWaypoints)
{
	float distanceBetweenOldWaypoints = INFINITY;
	AAWaypointActor* targetWaypoint = nullptr;
	FVector targetWaypointPosition = FVector::ZeroVector;

	if (pathDirectionWaypoints.Num() == 0)
	{
		currentVelocity = FVector::ZeroVector;
		playerNextWaypoint = playerCurrentWaypoint;

		return;
	}


	for (AAWaypointActor* directionWaypoint : pathDirectionWaypoints)
	{
		if (targetWaypointPosition == FVector::ZeroVector)
		{
			targetWaypointPosition = directionWaypoint->GetActorLocation();
			targetWaypoint = directionWaypoint;

			return;
		}

		float distanceBetweenNewWaypoints = FVector::Dist(playerCurrentWaypoint->GetActorLocation(), directionWaypoint->GetActorLocation());

		if (distanceBetweenOldWaypoints > distanceBetweenNewWaypoints)
		{
			targetWaypointPosition = directionWaypoint->GetActorLocation();

			distanceBetweenOldWaypoints = distanceBetweenNewWaypoints;

			targetWaypoint = directionWaypoint;
		}
	}

	playerNextWaypoint = targetWaypoint;
}

void AAPlayerPawn::MoveLeft(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();

	if (InputValue != 0.0f)
	{
		ApplyWaypointMovement(playerCurrentWaypoint->pathLeftWaypoints);
	}
}


void AAPlayerPawn::MoveRight(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();

	if (InputValue != 0.0f)
	{
		ApplyWaypointMovement(playerCurrentWaypoint->pathRightWaypoints);
	}
}

void AAPlayerPawn::MoveUp(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();

	if (InputValue != 0.0f)
	{
		ApplyWaypointMovement(playerCurrentWaypoint->pathUpWaypoints);
	}
}

void AAPlayerPawn::MoveDown(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();

	if (InputValue != 0.0f)
	{
		ApplyWaypointMovement(playerCurrentWaypoint->pathDownWaypoints);
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

