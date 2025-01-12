// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "APlayerPawn.h"
#include "GameManager.generated.h"

UCLASS(Blueprintable)
class GHOSTTRAP_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

	UPROPERTY(VisibleAnywhere, Category = "Number of Key Collectibles")
	int32 totalKeyCollectibles;

	bool setupKeyCollectibles = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetupKeyCollectibleCount();

	void YouChoom();

};
