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
	TArray<AAWaypointActor*> pathLeftWaypoints;
	TArray<AAWaypointActor*> pathRightWaypoints;
	TArray<AAWaypointActor*> pathUpWaypoints;
	TArray<AAWaypointActor*> pathDownWaypoints;
};
