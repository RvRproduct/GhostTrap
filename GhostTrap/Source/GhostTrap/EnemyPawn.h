// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "AIBasePawn.h"
#include "APlayerPawn.h"
#include "AWaypointActor.h"

#include "EnemyPawn.generated.h"


struct WaypointPathFinding
{
	float G = 0.0f;
	float H = 0.0f;
	float F = 0.0f;

	AAWaypointActor* parentWaypointActor;
	WaypointPathFinding* parentWaypoint;
};

UENUM(BlueprintType)
enum class EnemyTypes : uint8
{
	Random,
	TargetPlayer
};

UCLASS()
class GHOSTTRAP_API AEnemyPawn : public AAIBasePawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemyPawn();
	
	// All Waypoints
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "All Waypoints")
	TArray<AAWaypointActor*> allWaypoints;

	// For A* Path Finding
	TArray<AAWaypointActor*> setPathToWaypointTarget;
	TArray<TPair<AAWaypointActor*, WaypointPathFinding*>> openPathToWaypointTarget;
	TArray<TPair<AAWaypointActor*, WaypointPathFinding*>> closedPathToWaypointTarget;
	TPair<AAWaypointActor*, WaypointPathFinding*> startPathWaypoint;
	TPair<AAWaypointActor*, WaypointPathFinding*> goalPathWaypoint;
	TPair<AAWaypointActor*, WaypointPathFinding*> lastPathWaypoint;
	AAWaypointActor* parentWaypoint;

	bool waypointPathDone = false;
	bool hasStartedSearch = false;
	bool hasReachedDestination = true;


	// For The Seek
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Current Waypoint")
	AAWaypointActor* currentWaypoint;

	UPROPERTY(VisibleAnywhere, Category = "Next Waypoint")
	AAWaypointActor* nextWaypoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player")
	AAPlayerPawn* playerPawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enemy Type")
	EnemyTypes enemyType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* CollisionComponentReference;

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
	AAWaypointActor* GetRandomTargetWaypoint();
	void SetWaypointPath();

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlapComponent,
		AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

};
