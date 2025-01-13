// Created By Roberto Reynoso - RvRproduct
#include "EnemyPawn.h"

#include "Kismet/GameplayStatics.h"



// Sets default values
AEnemyPawn::AEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyPawn::BeginPlay()
{
	Super::BeginPlay();

	lastPathWaypoint.Key = currentWaypoint;

	if (currentWaypoint != nullptr)
	{

		if (nextWaypoint == nullptr)
		{
			nextWaypoint = currentWaypoint;
		}

		this->SetActorLocation(currentWaypoint->GetActorLocation());
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
			CollisionComponentReference->OnComponentBeginOverlap.AddDynamic(this, &AEnemyPawn::OnOverlapBegin);
		}
		else
		{
			//UE_LOG(LogTemp, Display, TEXT("The Collision Component Not Found"));
		}

	}
	
}

// Called every frame
void AEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FaceThePlayer(DeltaTime);

	if (hasReachedDestination)
	{
		if (!hasStartedSearch)
		{
			hasStartedSearch = true;
			BeginSearchWaypointPath();
		}
		
		if (!waypointPathDone)
		{
			SearchWaypointPath(lastPathWaypoint);
		}

		if (waypointPathDone)
		{
			SetWaypointPath();
			hasReachedDestination = false;
		}
	}
	else
	{
		Seek(nextWaypoint->GetActorLocation(), DeltaTime);

		if (currentWaypoint == goalPathWaypoint.Key)
		{
			hasStartedSearch = false;
			hasReachedDestination = true;

		}
	}

}

// Called to bind functionality to input
void AEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyPawn::ClearWaypointPath()
{
	setPathToWaypointTarget.Empty();

	startPathWaypoint.Key = nullptr;

	if (!startPathWaypoint.Value)
	{
		startPathWaypoint.Value = new WaypointPathFinding();
	}

	startPathWaypoint.Value->F = 0.0f;
	startPathWaypoint.Value->G = 0.0f;
	startPathWaypoint.Value->H = 0.0f;
	startPathWaypoint.Value->parentWaypointActor = nullptr;
	startPathWaypoint.Value->parentWaypoint = nullptr;

	if (!goalPathWaypoint.Value)
	{
		goalPathWaypoint.Value = new WaypointPathFinding();
	}

	goalPathWaypoint.Key = nullptr;
	goalPathWaypoint.Value->F = 0.0f;
	goalPathWaypoint.Value->G = 0.0f;
	goalPathWaypoint.Value->H = 0.0f;
	goalPathWaypoint.Value->parentWaypointActor = nullptr;
	goalPathWaypoint.Value->parentWaypoint = nullptr;

	if (!lastPathWaypoint.Value)
	{
		lastPathWaypoint.Value = new WaypointPathFinding();
	}

	lastPathWaypoint.Key = nullptr;
	lastPathWaypoint.Value->F = 0.0f;
	lastPathWaypoint.Value->G = 0.0f;
	lastPathWaypoint.Value->H = 0.0f;
	lastPathWaypoint.Value->parentWaypointActor = nullptr;
	lastPathWaypoint.Value->parentWaypoint = nullptr;
}

void AEnemyPawn::BeginSearchWaypointPath()
{
	waypointPathDone = false;
	ClearWaypointPath();

	startPathWaypoint.Key = currentWaypoint;

	if (enemyType == EnemyTypes::TargetPlayer && !playerPawn->isHidden)
	{
		goalPathWaypoint.Key = playerPawn->playerNextWaypoint;

		if (currentWaypoint == goalPathWaypoint.Key)
		{
			waypointPathDone = true;
			return;
		}
	}
	else if (enemyType == EnemyTypes::Random)
	{
		goalPathWaypoint.Key = GetRandomTargetWaypoint();
	}
	else
	{
		goalPathWaypoint.Key = GetRandomTargetWaypoint();
	}
	

	openPathToWaypointTarget.Empty();
	closedPathToWaypointTarget.Empty();

	openPathToWaypointTarget.Add(startPathWaypoint);
	lastPathWaypoint.Key = startPathWaypoint.Key;
}

void AEnemyPawn::SearchWaypointPath(TPair<AAWaypointActor*, WaypointPathFinding*> thisPathWaypoint)
{
	if (thisPathWaypoint.Key == nullptr)
	{
		return;
	}

	if (thisPathWaypoint.Key == goalPathWaypoint.Key)
	{
		waypointPathDone = true;
		return;
	}

	if (thisPathWaypoint.Key->pathClosestLeftWaypoint != nullptr)
	{
		if (!IsClosedWaypoint(thisPathWaypoint.Key->pathClosestLeftWaypoint))
		{
			SetWaypointGHF(thisPathWaypoint, thisPathWaypoint.Key->pathClosestLeftWaypoint, goalPathWaypoint.Key);
		}
	}

	if (thisPathWaypoint.Key->pathClosestRightWaypoint != nullptr)
	{
		if (!IsClosedWaypoint(thisPathWaypoint.Key->pathClosestRightWaypoint))
		{
			SetWaypointGHF(thisPathWaypoint, thisPathWaypoint.Key->pathClosestRightWaypoint, goalPathWaypoint.Key);
		}
	}

	if (thisPathWaypoint.Key->pathClosestUpWaypoint != nullptr)
	{
		if (!IsClosedWaypoint(thisPathWaypoint.Key->pathClosestUpWaypoint))
		{
			SetWaypointGHF(thisPathWaypoint, thisPathWaypoint.Key->pathClosestUpWaypoint, goalPathWaypoint.Key);
		}
	}

	if (thisPathWaypoint.Key->pathClosestDownWaypoint != nullptr)
	{
		if (!IsClosedWaypoint(thisPathWaypoint.Key->pathClosestDownWaypoint))
		{
			SetWaypointGHF(thisPathWaypoint, thisPathWaypoint.Key->pathClosestDownWaypoint, goalPathWaypoint.Key);
		}
	}

	// By F first
	openPathToWaypointTarget.Sort([](const TPair<AAWaypointActor*, WaypointPathFinding*> waypointPathA, const TPair<AAWaypointActor*, WaypointPathFinding*> waypointPathB)
		{
			return waypointPathA.Value->F < waypointPathB.Value->F;
		});

	// Then H Second
	openPathToWaypointTarget.Sort([](const TPair<AAWaypointActor*, WaypointPathFinding*> waypointPathA, const TPair<AAWaypointActor*, WaypointPathFinding*> waypointPathB)
		{
			return waypointPathA.Value->H < waypointPathB.Value->H;
		});

	TPair<AAWaypointActor*, WaypointPathFinding*> markerPathWaypoint = openPathToWaypointTarget[0];
	closedPathToWaypointTarget.Add(markerPathWaypoint);

	openPathToWaypointTarget.RemoveAt(0);

	lastPathWaypoint = markerPathWaypoint;

}

void AEnemyPawn::SetWaypointGHF(TPair<AAWaypointActor*, WaypointPathFinding*> thisPathWaypoint, AAWaypointActor* neighborWaypoint, AAWaypointActor* goalWaypoint)
{
	if (!thisPathWaypoint.Key || !neighborWaypoint || !goalWaypoint)
	{
		// UE_LOG(LogTemp, Warning, TEXT("Invalid waypoint(s) in SetWaypointGHF."));
		return;
	}

	float G = FVector::Dist(thisPathWaypoint.Key->GetActorLocation(), neighborWaypoint->GetActorLocation()) + thisPathWaypoint.Value->G;
	float H = FVector::Dist(neighborWaypoint->GetActorLocation(), goalWaypoint->GetActorLocation());
	float F = G + H;

	if (!UpdateWaypoint(neighborWaypoint, G, H, F, thisPathWaypoint))
	{

		TPair<AAWaypointActor*, WaypointPathFinding*> newNeighborWaypoint;
		newNeighborWaypoint.Value = new WaypointPathFinding();
		newNeighborWaypoint.Key = neighborWaypoint;
		newNeighborWaypoint.Value->G = G;
		newNeighborWaypoint.Value->H = H;
		newNeighborWaypoint.Value->F = F;
		newNeighborWaypoint.Value->parentWaypointActor = thisPathWaypoint.Key;
		newNeighborWaypoint.Value->parentWaypoint = thisPathWaypoint.Value;

		openPathToWaypointTarget.Add(newNeighborWaypoint);
	}
}

bool AEnemyPawn::UpdateWaypoint(AAWaypointActor* neighbourWaypoint, float G, float H, float F, TPair<AAWaypointActor*, WaypointPathFinding*> parentPathWaypoint)
{
	for (TPair<AAWaypointActor*, WaypointPathFinding*> openWaypoint : openPathToWaypointTarget)
	{
		if (openWaypoint.Key == neighbourWaypoint)
		{
			openWaypoint.Value->G = G;
			openWaypoint.Value->H = H;
			openWaypoint.Value->F = F;
			openWaypoint.Value->parentWaypointActor = parentPathWaypoint.Key;
			openWaypoint.Value->parentWaypoint = parentPathWaypoint.Value;
			return true;
		}
	}

	return false;
}

bool AEnemyPawn::IsClosedWaypoint(AAWaypointActor* thisWaypoint)
{
	for (const TPair<AAWaypointActor*, WaypointPathFinding*>& closedWaypoint : closedPathToWaypointTarget)
	{
		if (closedWaypoint.Key == thisWaypoint)
		{
			return true;
		}
	}

	return false;
}

void AEnemyPawn::SetWaypointPath()
{
	if (!lastPathWaypoint.Key || !lastPathWaypoint.Value)
	{
		// UE_LOG(LogTemp, Warning, TEXT("Invalid lastPathWaypoint in SetWaypointPath."));
		return;
	}

	AAWaypointActor* beginPathWaypointActor = lastPathWaypoint.Key;
	WaypointPathFinding* beginPathWaypoint = lastPathWaypoint.Value;

	setPathToWaypointTarget.Add(beginPathWaypointActor);

	while (startPathWaypoint.Key != beginPathWaypointActor && beginPathWaypointActor != nullptr)
	{
		beginPathWaypointActor = beginPathWaypoint->parentWaypointActor;
		setPathToWaypointTarget.Add(beginPathWaypointActor);
		beginPathWaypoint = beginPathWaypoint->parentWaypoint;
	}

	if (beginPathWaypointActor != startPathWaypoint.Key)
	{
		setPathToWaypointTarget.Add(startPathWaypoint.Key);
	}

	if (setPathToWaypointTarget.Num() > 0)
	{
		/*for (AAWaypointActor* way : setPathToWaypointTarget)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(
					-1,
					5.f,
					FColor::Yellow,
					FString::Printf(TEXT("Waypoint Path Location: %s"), *way->GetActorLocation().ToString())
				);
			}
		}*/

		while (nextWaypoint == currentWaypoint && setPathToWaypointTarget.Num() > 0)
		{
			nextWaypoint = setPathToWaypointTarget.Pop();
		}
	}
}

AAWaypointActor* AEnemyPawn::GetRandomTargetWaypoint()
{
	if (allWaypoints.Num() > 0)
	{
		return allWaypoints[FMath::RandRange(0, allWaypoints.Num() - 1)];
	}

	return nullptr;
}

void AEnemyPawn::OnOverlapBegin(UPrimitiveComponent* OverlapComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (AAPlayerPawn* hitPlayerPawn = Cast<AAPlayerPawn>(OtherActor))
		{
			/*if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(
					-1,
					5.f,
					FColor::Yellow,
					FString::Printf(TEXT("You hit the player Gonk"))
				);
			}*/

			UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("YouGonkLevel")));
		}

		if (AAWaypointActor* hitWaypointActor = Cast<AAWaypointActor>(OtherActor))
		{
			currentWaypoint = hitWaypointActor;

			if (!hasReachedDestination)
			{
				if (setPathToWaypointTarget.Num() > 0)
				{
					nextWaypoint = setPathToWaypointTarget.Pop();
				}
			}
		}

		
	}
}

void AEnemyPawn::FaceThePlayer(float DeltaTime)
{
	if (!playerPawn) return;

	FVector playerLocation = playerPawn->GetActorLocation();
	FVector directionToPlayer = playerLocation - GetActorLocation();

	directionToPlayer.Z = 0;

	directionToPlayer.Normalize();

	FRotator targetRotation = directionToPlayer.Rotation();

	targetRotation.Yaw -= 90.0f;

	FRotator currentRotation = GetActorRotation();

	FRotator newRotation = FMath::RInterpTo(currentRotation, targetRotation, DeltaTime, 10.0f);

	SetActorRotation(newRotation);
}

