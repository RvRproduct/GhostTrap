// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "AWaypointActor.h"

#include "AAutomaticWaypointsActor.generated.h"

UCLASS()
class GHOSTTRAP_API AAAutomaticWaypointsActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAAutomaticWaypointsActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category = "WayPoints")
	TArray<AAWaypointActor*> waypoints;

	void SetUpWaypoints();
	void CheckValidWaypointPath(AAWaypointActor* currentWaypoint, AAWaypointActor* nextWaypoint);
	void CheckIfWaypointPathIsBlocked(AAWaypointActor* currentWaypoint, AAWaypointActor* nextWaypoint);
};
