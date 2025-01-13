// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AIBasePawn.generated.h"

enum class MovementDirection : uint8
{
	None,
	Left,
	Right,
	Up,
	Down
};

UCLASS()
class GHOSTTRAP_API AAIBasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAIBasePawn();

	UPROPERTY(EditAnywhere, Category = "Movement")
	float maxSpeed = 600.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	MovementDirection currentMovementDirection;

	


	UPROPERTY(VisibleAnywhere, Category = "Movement")
	FVector currentVelocity = FVector::ZeroVector;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Seek(FVector waypointPosition, float DeltaTime);
};
