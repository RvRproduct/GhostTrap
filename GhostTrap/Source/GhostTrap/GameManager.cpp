// Created By Roberto Reynoso - RvRproduct

#include "GameManager.h"
#include "EngineUtils.h"


// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<AAPlayerPawn> It(GetWorld()); It; ++It)
	{
		AAPlayerPawn* FoundPawn = *It;

		if (FoundPawn)
		{
			APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
			if (PlayerController)
			{
				PlayerController->Possess(FoundPawn);
			}
			break;
		}
	}
	
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

