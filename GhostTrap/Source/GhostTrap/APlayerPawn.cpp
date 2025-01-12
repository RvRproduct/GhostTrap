// Created By Roberto Reynoso - RvRproduct
#include "APlayerPawn.h"

#include "InputMappingContext.h"
#include "Camera/CameraComponent.h"


// Sets default values
AAPlayerPawn::AAPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(RootComponent);

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

		if (playerNextWaypoint == nullptr)
		{
			playerNextWaypoint = playerCurrentWaypoint;
		}

		this->SetActorLocation(playerCurrentWaypoint->GetActorLocation());
	}

	if (!CollisionComponentReference)
	{

		CollisionComponentReference = FindComponentByClass<UBoxComponent>();

		if (CollisionComponentReference)
		{
			UE_LOG(LogTemp, Display, TEXT("The Collision Component Found: %s"), *CollisionComponentReference->GetName());
			CollisionComponentReference->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			CollisionComponentReference->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
			CollisionComponentReference->OnComponentBeginOverlap.AddDynamic(this, &AAPlayerPawn::OnOverlapBegin);
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

	Seek(playerNextWaypoint->GetActorLocation(), DeltaTime);

}

// Called to bind functionality to input
void AAPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMapping, 0);
		}
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Binding Each Movement Direction
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::Move);
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
		/*if (targetWaypointPosition == FVector::ZeroVector)
		{
			targetWaypointPosition = directionWaypoint->GetActorLocation();
			targetWaypoint = directionWaypoint;

			return;
		}*/

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

void AAPlayerPawn::Move(const FInputActionValue& Value)
{
	FVector2D MovementInput = Value.Get<FVector2D>();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.f,
			FColor::Yellow,
			FString::Printf(TEXT("The Movement Input: %s"), *MovementInput.ToString())
		);
	}
	
	if (MovementInput.X < 0) // Left
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				5.f,
				FColor::Yellow,
				FString::Printf(TEXT("The Movement Left: %s"), *MovementInput.ToString())
			);
		}
		ApplyWaypointMovement(playerCurrentWaypoint->pathLeftWaypoints);
	}
	else if (MovementInput.X > 0) // Right
	{
		ApplyWaypointMovement(playerCurrentWaypoint->pathRightWaypoints);
	}

	
	if (MovementInput.Y > 0) // Up
	{
		ApplyWaypointMovement(playerCurrentWaypoint->pathUpWaypoints);
	}
	else if (MovementInput.Y < 0) // Down
	{
		ApplyWaypointMovement(playerCurrentWaypoint->pathDownWaypoints);
	}

	RotatePlayerTowardsDirection(MovementInput, GetWorld()->GetDeltaSeconds());
	RotateCameraTowardsForward(GetWorld()->GetDeltaSeconds());
}

void AAPlayerPawn::RotatePlayerTowardsDirection(const FVector2D& MovementInput, float DeltaTime)
{

}

void AAPlayerPawn::RotateCameraTowardsForward(float DeltaTime)
{

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

