// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AIBasePawn.h"
#include "APlayerPawn.h"
#include "AWaypointActor.h"

#include "EnemyPawn.generated.h"


struct WaypointPathFinding
{
	float G = 0.0f;
	float H = 0.0f;
	float F = 0.0f;

	TWeakObjectPtr<AAWaypointActor> parentWaypointActor;
	WaypointPathFinding* parentWaypoint;
};

UCLASS()
class GHOSTTRAP_API AEnemyPawn : public AAIBasePawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemyPawn();

	// For A* Path Finding
	TArray<AAWaypointActor*> setPathToWaypointTarget;
	TArray<TPair<AAWaypointActor*, WaypointPathFinding*>> openPathToWaypointTarget;
	TArray<TPair<AAWaypointActor*, WaypointPathFinding*>> closedPathToWaypointTarget;
	TPair<AAWaypointActor*, WaypointPathFinding*> startPathWaypoint;
	TPair<AAWaypointActor*, WaypointPathFinding*> goalPathWaypoint;
	TPair<AAWaypointActor*, WaypointPathFinding*> lastPathWaypoint;
	AAWaypointActor* parentWaypoint;

	bool waypointPathDone = false;


	// For The Seek
	AAWaypointActor* currentWaypoint;
	AAWaypointActor* nextWaypoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player")
	AAPlayerPawn* playerPawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ClearWaypointPath();
	void BeginSearchWaypointPath();
	void SearchWaypointPath(TPair<AAWaypointActor*, WaypointPathFinding*> thisPathWaypoint);
	bool UpdateWaypoint(AAWaypointActor* neighbourWaypoint, float G, float H, float F, TPair<AAWaypointActor*, WaypointPathFinding*> parentPathWaypoint);
	void SetWaypointGHF(TPair<AAWaypointActor*, WaypointPathFinding*> thisPathWaypoint, AAWaypointActor* neighborWaypoint, AAWaypointActor* goalWaypoint);
	bool IsClosedWaypoint(AAWaypointActor* thisWaypoint);
	void SetWaypointPath();

};
