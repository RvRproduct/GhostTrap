// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AWaypointActor.generated.h"

UCLASS()
class GHOSTTRAP_API AAWaypointActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAWaypointActor();

public:
	UPROPERTY(VisibleAnywhere, Category = "WaypointsLeft")
	TArray<AAWaypointActor*> pathLeftWaypoints;
	AAWaypointActor* pathClosestLeftWaypoint;

	UPROPERTY(VisibleAnywhere, Category = "WaypointsRight")
	TArray<AAWaypointActor*> pathRightWaypoints;
	AAWaypointActor* pathClosestRightWaypoint;

	UPROPERTY(VisibleAnywhere, Category = "WaypointsUp")
	TArray<AAWaypointActor*> pathUpWaypoints;
	AAWaypointActor* pathClosestUpWaypoint;

	UPROPERTY(VisibleAnywhere, Category = "WaypointsDown")
	TArray<AAWaypointActor*> pathDownWaypoints;
	AAWaypointActor* pathClosestDownWaypoint;
};
