// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AIBasePawn.h"
#include "AWaypointActor.h"

#include "EnemyPawn.generated.h"


struct WaypointPathFinding
{
	float G = 0.0f;
	float H = 0.0f;
	float F = 0.0f;
};

UCLASS()
class GHOSTTRAP_API AEnemyPawn : public AAIBasePawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemyPawn();

	// For A* Path Finding
	TPair<AAWaypointActor*, WaypointPathFinding> pathToWaypointTarget;

	AAWaypointActor* currentWaypoint;
	AAWaypointActor* nextWaypoint;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
