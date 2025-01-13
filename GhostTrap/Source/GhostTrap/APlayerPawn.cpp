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
			//UE_LOG(LogTemp, Display, TEXT("The Collision Component Found: %s"), *CollisionComponentReference->GetName());
			CollisionComponentReference->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

			// Set the response to overlap with all channels (do not block, only overlap)
			CollisionComponentReference->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
			CollisionComponentReference->OnComponentBeginOverlap.AddDynamic(this, &AAPlayerPawn::OnOverlapBegin);
		}
		else
		{
			//UE_LOG(LogTemp, Display, TEXT("The Collision Component Not Found"));
		}

	}
	
}

// Called every frame
void AAPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Seek(playerNextWaypoint->GetActorLocation(), DeltaTime);
	ApplyJump(DeltaTime);
	UpdatePlayerRotation(DeltaTime);
	UpdateCameraRotation(DeltaTime);
	DebuffsAndBuffs(DeltaTime);

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
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::Jump);
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

	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.f,
			FColor::Yellow,
			FString::Printf(TEXT("The Movement Input: %s"), *MovementInput.ToString())
		);
	}*/
	
	if (MovementInput.X < 0) // Left
	{
		RotatePlayerTowardsDirection(MovementInput, GetWorld()->GetDeltaSeconds());
	}
	else if (MovementInput.X > 0) // Right
	{
		RotatePlayerTowardsDirection(MovementInput, GetWorld()->GetDeltaSeconds());
	}

	int32 yaw = FMath::RoundToInt(GetActorRotation().Yaw);
	const float Tolerance = 5.0f;
	
	if (MovementInput.Y > 0) // Up Moves whereever facing
	{

		/*if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				5.f,
				FColor::Yellow,
				FString::Printf(TEXT("This is the Rotation: %s"), *GetActorRotation().ToString())
			);
		}*/

		if (FMath::Abs(yaw) <= Tolerance)
		{
			ApplyWaypointMovement(playerCurrentWaypoint->pathLeftWaypoints);
		}
		else if (FMath::Abs(yaw - 90) <= Tolerance)
		{
			ApplyWaypointMovement(playerCurrentWaypoint->pathUpWaypoints);
		}
		else if (FMath::Abs(yaw + 90) <= Tolerance)
		{
			ApplyWaypointMovement(playerCurrentWaypoint->pathDownWaypoints);
		}
		else if (FMath::Abs(FMath::Abs(yaw) - 180) <= Tolerance)
		{
			ApplyWaypointMovement(playerCurrentWaypoint->pathRightWaypoints);
		}
	}
	else if (MovementInput.Y < 0)
	{
		if (FMath::Abs(yaw) <= Tolerance)
		{
			ApplyWaypointMovement(playerCurrentWaypoint->pathRightWaypoints);
		}
		else if (FMath::Abs(yaw - 90) <= Tolerance)
		{
			ApplyWaypointMovement(playerCurrentWaypoint->pathDownWaypoints);
		}
		else if (FMath::Abs(yaw + 90) <= Tolerance)
		{
			ApplyWaypointMovement(playerCurrentWaypoint->pathUpWaypoints);
		}
		else if (FMath::Abs(FMath::Abs(yaw) - 180) <= Tolerance)
		{
			ApplyWaypointMovement(playerCurrentWaypoint->pathLeftWaypoints);
		}
	}
}

void AAPlayerPawn::Jump(const FInputActionValue& Value)
{
	if (Value.Get<bool>())
	{
		if (!isJumping)
		{
			isJumping = true;
			jumpStartZ = GetActorLocation().Z;
			jumpProgress = 0.0f;
		}
	}
}

void AAPlayerPawn::ApplyJump(float DeltaTime)
{
	if (isJumping)
	{
		jumpProgress += DeltaTime / jumpDuration;

		FVector currentPosition = GetActorLocation();

		if (jumpProgress <= 0.5f)
		{
			currentPosition.Z = FMath::Lerp(jumpStartZ, jumpStartZ + jumpHeight, jumpProgress * 2);
		}
		else
		{
			currentPosition.Z = FMath::Lerp(jumpStartZ + jumpHeight, jumpStartZ, (jumpProgress - 0.5f) * 2);
		}

		SetActorLocation(currentPosition);

		if (jumpProgress >= 1.0f)
		{
			isJumping = false;
			jumpProgress = 0.0f;
		}
	}
}

void AAPlayerPawn::RotatePlayerTowardsDirection(const FVector2D& MovementInput, float DeltaTime)
{
	if (MovementInput.IsZero())
	{
		return;
	}

	FRotator newRotation = FRotator(0.0f, 0.0f, 0.0f);

	if (MovementInput.X < 0)  // Left (rotate counterclockwise 90 degrees)
	{
		newRotation = FRotator(0.0f, -90.0f, 0.0f);  // Rotate 90 degrees to the left
	}
	else if (MovementInput.X > 0)  // Right (rotate clockwise 90 degrees)
	{
		newRotation = FRotator(0.0f, 90.0f, 0.0f);  // Rotate 90 degrees to the right
	}
	

	playerRotation += newRotation;
}

void AAPlayerPawn::UpdateCameraRotation(float DeltaTime)
{
	if (!Camera)
	{
		return;
	}

	cameraRotation = GetActorRotation();

	FRotator currentCameraRotation = Camera->GetComponentRotation();
	FRotator newCameraRotation = FMath::RInterpTo(currentCameraRotation, cameraRotation, DeltaTime, cameraRotationSpeed);

	Camera->SetWorldRotation(newCameraRotation);
}

void AAPlayerPawn::UpdatePlayerRotation(float DeltaTime)
{

	FRotator currrentRotation = GetActorRotation();
	FRotator newRotation = FMath::RInterpTo(currrentRotation, playerRotation, DeltaTime, playerRotationSpeed);
	SetActorRotation(newRotation);
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

void AAPlayerPawn::DebuffsAndBuffs(float DeltaTime)
{
	if (hasPowerUp)
	{
		isHitSlowDown = false;

		timer += DeltaTime;

		if (timer >= maxTimerPowerUp)
		{
			hasPowerUp = false;
			maxSpeed = 600.0f;
		}
	}
	else if (isHitSlowDown)
	{
		timer += DeltaTime;

		if (timer >= maxTimerSlowDown)
		{
			isHitSlowDown = false;
			maxSpeed = 600.0f;
		}
	}
}

