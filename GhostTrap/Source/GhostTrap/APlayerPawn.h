// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "AWaypointActor.h"
#include "AIBasePawn.h"

#include "APlayerPawn.generated.h"


UCLASS()
class GHOSTTRAP_API AAPlayerPawn : public AAIBasePawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

private:
	void RotatePlayerTowardsDirection(const FVector2D& MovementInput, float DeltaTime);
	void UpdatePlayerRotation(float DeltaTime);
	void UpdateCameraRotation(float DeltaTime);

	FVector2D lastDirection = FVector2D(0.0f, 1.0f);

	FRotator cameraRotation;

	bool isJumping = false;
	float jumpHeight = 250.0f;
	float jumpDuration = 0.8f;
	float jumpStartZ = 0.0f;
	float jumpProgress = 0.0f;

public:
	// Sets default values for this pawn's properties
	AAPlayerPawn();

	FRotator playerRotation;


	bool isHidden = false;
	float timer = 0.0f;
	bool hasPowerUp = false;
	float maxTimerPowerUp = 10.0f;
	bool isHitSlowDown = false;
	float maxTimerSlowDown = 2.0f;

	UPROPERTY(EditAnywhere, Category = "Current Waypoint")
	AAWaypointActor* playerCurrentWaypoint;

	UPROPERTY(VisibleAnywhere, Category = "Next Waypoint")
	AAWaypointActor* playerNextWaypoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input Mapping")
	class UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Speed")
	float cameraRotationSpeed = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player Rotation Speed")
	float playerRotationSpeed = 10.0f;


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

	void Move(const FInputActionValue& Value);
	void Jump(const FInputActionValue& Value);
	void ApplyWaypointMovement(TArray<AAWaypointActor*> pathDirectionWaypoints);
	void ApplyJump(float DeltaTime);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlapComponent,
		AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	void DebuffsAndBuffs(float DeltaTime);
};
