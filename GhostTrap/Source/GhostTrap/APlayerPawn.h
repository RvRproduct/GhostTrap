// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "AWaypointActor.h"

#include "APlayerPawn.generated.h"


UCLASS()
class GHOSTTRAP_API AAPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAPlayerPawn();

	AAWaypointActor* playerCurrentWaypoint;
	AAWaypointActor* playerNextWaypoint;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveVertical();
	void MoveHorizontal();

};
