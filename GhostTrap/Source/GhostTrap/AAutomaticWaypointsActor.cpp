// Created By Roberto Reynoso - RvRproduct
#include "AAutomaticWaypointsActor.h"

// Sets default values
AAAutomaticWaypointsActor::AAAutomaticWaypointsActor()
{

}

// Called when the game starts or when spawned
void AAAutomaticWaypointsActor::BeginPlay()
{
	Super::BeginPlay();

	SetUpWaypoints();
}


// Set up Possible Paths each waypoint can go
void AAAutomaticWaypointsActor::SetUpWaypoints()
{
	for (AAWaypointActor* currentWaypoint : waypoints)
	{
		for (AAWaypointActor* otherWaypoint : waypoints)
		{
			if (currentWaypoint != otherWaypoint)
			{
				CheckValidWaypointPath(currentWaypoint, otherWaypoint);
			}
		}
	}

	for (AAWaypointActor* currentWaypoint : waypoints)
	{
		AddClosestPathWaypointToWaypoint(WaypointDirection::Left, currentWaypoint, currentWaypoint->pathLeftWaypoints);
		AddClosestPathWaypointToWaypoint(WaypointDirection::Right, currentWaypoint, currentWaypoint->pathRightWaypoints);
		AddClosestPathWaypointToWaypoint(WaypointDirection::Up, currentWaypoint, currentWaypoint->pathUpWaypoints);
		AddClosestPathWaypointToWaypoint(WaypointDirection::Down, currentWaypoint, currentWaypoint->pathDownWaypoints);
	}
}

// Check whether or not waypoint to waypoint path lines up and is valid
void AAAutomaticWaypointsActor::CheckValidWaypointPath(AAWaypointActor* currentWaypoint, AAWaypointActor* otherWaypoint)
{
	if (currentWaypoint != NULL && otherWaypoint != NULL)
	{
		FVector currentWaypointPosition = currentWaypoint->GetActorLocation();
		FVector otherWaypointPosition = otherWaypoint->GetActorLocation();

		if (currentWaypointPosition.X == otherWaypointPosition.X)
		{
			if (currentWaypointPosition.Y < otherWaypointPosition.Y)
			{
				// up
				CheckIfWaypointPathIsBlocked(GetWorld(), WaypointDirection::Up, currentWaypoint, otherWaypoint, currentWaypointPosition, otherWaypointPosition, "Wall");
			}
			else if (currentWaypointPosition.Y > otherWaypointPosition.Y)
			{
				//down
				CheckIfWaypointPathIsBlocked(GetWorld(), WaypointDirection::Down, currentWaypoint, otherWaypoint, currentWaypointPosition, otherWaypointPosition, "Wall");
			}
		}
		else if (currentWaypointPosition.Y == otherWaypointPosition.Y)
		{
			if (currentWaypointPosition.X < otherWaypointPosition.X)
			{
				// left
				CheckIfWaypointPathIsBlocked(GetWorld(), WaypointDirection::Left, currentWaypoint, otherWaypoint, currentWaypointPosition, otherWaypointPosition, "Wall");
			}
			else if (currentWaypointPosition.X > otherWaypointPosition.X)
			{
				// right
				CheckIfWaypointPathIsBlocked(GetWorld(), WaypointDirection::Right, currentWaypoint, otherWaypoint, currentWaypointPosition, otherWaypointPosition, "Wall");
			}
		}
	}
}

// Check whether or not the line up between waypoint to waypoint is blocked by some obstruction
void AAAutomaticWaypointsActor::CheckIfWaypointPathIsBlocked(UWorld* World, WaypointDirection waypointDirection, AAWaypointActor* currentWaypoint, AAWaypointActor* otherWaypoint, FVector currentWaypointPosition, FVector otherWaypointPosition, FName TagToCheck)
{
	// Setting up our RayCast so that we can check from walls/obstruction between the waypoints
	FVector Start = currentWaypointPosition;
	FVector Direction = otherWaypointPosition - currentWaypointPosition;
	FVector End = currentWaypointPosition + Direction;

	FCollisionQueryParams CollisionParams;
	CollisionParams.bTraceComplex = false;
	CollisionParams.bReturnPhysicalMaterial = false;
	FHitResult HitResult;

	bool bHit = World->LineTraceSingleByChannel(
		HitResult,
		Start,
		End,
		ECC_Visibility,
		CollisionParams
		);

	DrawDebugLine(World, Start, End, FColor::Green, false, 2.0f, 0, 1.0f);

	if (bHit)
	{
		AActor* HitActor = HitResult.GetActor();

		if (HitActor && HitActor->ActorHasTag(TagToCheck))
		{
			// We will not add this to the waypoint as a valid path
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(
					-1,
					5.f,
					FColor::Yellow,
					FString::Printf(TEXT("Made a Collision with Wall"))
				);
			}
		}
		else
		{
			AddPathToWaypoint(waypointDirection, currentWaypoint, otherWaypoint);
		}
	}
	else
	{
		AddPathToWaypoint(waypointDirection, currentWaypoint, otherWaypoint);
	}
	
}

void AAAutomaticWaypointsActor::AddPathToWaypoint(WaypointDirection waypointDirection, AAWaypointActor* currentWaypoint, AAWaypointActor* otherWaypoint)
{
	if (waypointDirection == WaypointDirection::Left)
	{
		currentWaypoint->pathLeftWaypoints.Add(otherWaypoint);
	}
	else if (waypointDirection == WaypointDirection::Right)
	{
		currentWaypoint->pathRightWaypoints.Add(otherWaypoint);
	}
	else if (waypointDirection == WaypointDirection::Up)
	{
		currentWaypoint->pathUpWaypoints.Add(otherWaypoint);
	}
	else if (waypointDirection == WaypointDirection::Down)
	{
		currentWaypoint->pathDownWaypoints.Add(otherWaypoint);
	}
}

void AAAutomaticWaypointsActor::AddClosestPathWaypointToWaypoint(WaypointDirection waypointDirection, AAWaypointActor* currentWaypoint, TArray<AAWaypointActor*> pathDirectionWaypoints)
{
	float distanceBetweenOldWaypoints = INFINITY;
	AAWaypointActor* targetWaypoint = nullptr;
	FVector targetWaypointPosition = FVector::ZeroVector;


	for (AAWaypointActor* directionWaypoint : pathDirectionWaypoints)
	{
		/*if (targetWaypointPosition == FVector::ZeroVector)
		{
			targetWaypointPosition = directionWaypoint->GetActorLocation();
			targetWaypoint = directionWaypoint;

			return;
		}*/

		float distanceBetweenNewWaypoints = FVector::Dist(currentWaypoint->GetActorLocation(), directionWaypoint->GetActorLocation());

		if (distanceBetweenOldWaypoints > distanceBetweenNewWaypoints)
		{
			targetWaypointPosition = directionWaypoint->GetActorLocation();

			distanceBetweenOldWaypoints = distanceBetweenNewWaypoints;

			targetWaypoint = directionWaypoint;
		}
	}

	if (waypointDirection == WaypointDirection::Left)
	{
		currentWaypoint->pathClosestLeftWaypoint = targetWaypoint;
	}
	else if (waypointDirection == WaypointDirection::Right)
	{
		currentWaypoint->pathClosestRightWaypoint = targetWaypoint;
	}
	else if (waypointDirection == WaypointDirection::Up)
	{
		currentWaypoint->pathClosestUpWaypoint = targetWaypoint;
	}
	else if (waypointDirection == WaypointDirection::Down)
	{
		currentWaypoint->pathClosestDownWaypoint = targetWaypoint;
	}
}