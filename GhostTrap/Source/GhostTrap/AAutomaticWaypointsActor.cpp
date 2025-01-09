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
	
}


// Set up Possible Paths each waypoint can go
void AAAutomaticWaypointsActor::SetUpWaypoints()
{
	for (AAWaypointActor* waypoint : waypoints)
	{

	}
}

// Check whether or not waypoint to waypoint path lines up and is valid
void AAAutomaticWaypointsActor::CheckValidWaypointPath(AAWaypointActor* currentWaypoint, AAWaypointActor* nextWaypoint)
{

}

// Check whether or not the line up between waypoint to waypoint is blocked by some obstruction
void AAAutomaticWaypointsActor::CheckIfWaypointPathIsBlocked(AAWaypointActor* currentWaypoint, AAWaypointActor* nextWaypoint)
{

}


