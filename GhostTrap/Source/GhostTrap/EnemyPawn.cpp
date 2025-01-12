// Created By Roberto Reynoso - RvRproduct


#include "EnemyPawn.h"

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
	
}

// Called every frame
void AEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
	startPathWaypoint.Value->F = 0.0f;
	startPathWaypoint.Value->G = 0.0f;
	startPathWaypoint.Value->H = 0.0f;
	startPathWaypoint.Value->parentWaypointActor = nullptr;
	startPathWaypoint.Value->parentWaypoint = nullptr;

	goalPathWaypoint.Key = nullptr;
	goalPathWaypoint.Value->F = 0.0f;
	goalPathWaypoint.Value->G = 0.0f;
	goalPathWaypoint.Value->H = 0.0f;
	goalPathWaypoint.Value->parentWaypointActor = nullptr;
	goalPathWaypoint.Value->parentWaypoint = nullptr;

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
	goalPathWaypoint.Key = playerPawn->playerNextWaypoint;

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
	openPathToWaypointTarget.Sort([](const TPair<AAWaypointActor*, WaypointPathFinding> waypointPathA, const TPair<AAWaypointActor*, WaypointPathFinding> waypointPathB)
		{
			return waypointPathA.Value.F < waypointPathB.Value.F;
		});

	// Then H Second
	openPathToWaypointTarget.Sort([](const TPair<AAWaypointActor*, WaypointPathFinding> waypointPathA, const TPair<AAWaypointActor*, WaypointPathFinding> waypointPathB)
		{
			return waypointPathA.Value.H < waypointPathB.Value.H;
		});

	TPair<AAWaypointActor*, WaypointPathFinding*> markerPathWaypoint = openPathToWaypointTarget[0];
	closedPathToWaypointTarget.Add(markerPathWaypoint);

	openPathToWaypointTarget.RemoveAt(0);

	lastPathWaypoint = markerPathWaypoint;

}

void AEnemyPawn::SetWaypointGHF(TPair<AAWaypointActor*, WaypointPathFinding*> thisPathWaypoint, AAWaypointActor* neighborWaypoint, AAWaypointActor* goalWaypoint)
{
	float G = FVector::Dist(thisPathWaypoint.Key->GetActorLocation(), neighborWaypoint->GetActorLocation()) + thisPathWaypoint.Value->G;
	float H = FVector::Dist(neighborWaypoint->GetActorLocation(), goalWaypoint->GetActorLocation());
	float F = G + H;

	if (!UpdateWaypoint(neighborWaypoint, G, H, F, thisPathWaypoint))
	{
		TPair<AAWaypointActor*, WaypointPathFinding*> newNeighborWaypoint;
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
	AAWaypointActor* beginPathWaypointActor = lastPathWaypoint.Key;
	WaypointPathFinding* beginPathWaypoint = lastPathWaypoint.Value;

	while (startPathWaypoint.Key != beginPathWaypointActor && beginPathWaypointActor != nullptr)
	{
		setPathToWaypointTarget.Add(beginPathWaypointActor);
		beginPathWaypoint = beginPathWaypoint->parentWaypoint;
	}

	setPathToWaypointTarget.Add(beginPathWaypointActor);
}

