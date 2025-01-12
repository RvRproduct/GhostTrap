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

	FRotator playerRotation;
	FRotator cameraRotation;

public:
	// Sets default values for this pawn's properties
	AAPlayerPawn();

	UPROPERTY(EditAnywhere, Category = "Current Waypoint")
	AAWaypointActor* playerCurrentWaypoint;

	UPROPERTY(VisibleAnywhere, Category = "Next Waypoint")
	AAWaypointActor* playerNextWaypoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input Mapping")
	class UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

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
	void ApplyWaypointMovement(TArray<AAWaypointActor*> pathDirectionWaypoints);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlapComponent,
		AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);
};
