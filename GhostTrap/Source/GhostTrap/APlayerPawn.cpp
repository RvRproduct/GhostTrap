// Created By Roberto Reynoso - RvRproduct


#include "APlayerPawn.h"

// Sets default values
AAPlayerPawn::AAPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	playerCurrentWaypoint = nullptr;
	playerNextWaypoint = nullptr;

}

// Called when the game starts or when spawned
void AAPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Binding Each Movement Direction
		EnhancedInputComponent->BindAction(MoveLeftAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::MoveLeft);
		EnhancedInputComponent->BindAction(MoveRightAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::MoveRight);
		EnhancedInputComponent->BindAction(MoveUpAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::MoveUp);
		EnhancedInputComponent->BindAction(MoveDownAction, ETriggerEvent::Triggered, this, &AAPlayerPawn::MoveDown);
	}

}

void AAPlayerPawn::MoveLeft(const FInputActionValue& Value)
{
	const float InputValue = Value.Get<float>();

	if (InputValue != 0.0f)
	{

	}
}


void AAPlayerPawn::MoveRight(const FInputActionValue& Value)
{

}

void AAPlayerPawn::MoveUp(const FInputActionValue& Value)
{

}

void AAPlayerPawn::MoveDown(const FInputActionValue& Value)
{

}

