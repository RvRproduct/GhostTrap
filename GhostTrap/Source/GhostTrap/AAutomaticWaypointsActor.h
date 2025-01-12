// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "AWaypointActor.h"

#include "AAutomaticWaypointsActor.generated.h"

enum class WaypointDirection : uint8
{
	Left,
	Right,
	Up,
	Down
};

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
	void CheckValidWaypointPath(AAWaypointActor* currentWaypoint, AAWaypointActor* otherWaypoint);
	void CheckIfWaypointPathIsBlocked(UWorld* World, WaypointDirection waypointDirection, AAWaypointActor* currentWaypoint, AAWaypointActor* otherWaypoint, FVector currentWaypointPosition, FVector otherWaypointPosition, FName TagToCheck);
	void AddPathToWaypoint(WaypointDirection waypointDirection, AAWaypointActor* currentWaypoint, AAWaypointActor* otherWaypoint);
	void AddClosestPathWaypointToWaypoint(WaypointDirection waypointDirection, AAWaypointActor* currentWaypoint, TArray<AAWaypointActor*> pathDirectionWaypoints);
};
