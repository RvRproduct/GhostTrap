// Created By Roberto Reynoso - RvRproduct


#include "KeyCollectible.h"

// Sets default values
AKeyCollectible::AKeyCollectible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AKeyCollectible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeyCollectible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

