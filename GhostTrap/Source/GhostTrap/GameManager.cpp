// Created By Roberto Reynoso - RvRproduct
#include "GameManager.h"

#include "Kismet/GameplayStatics.h"
#include "KeyCollectible.h"
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

	SetupKeyCollectibleCount();
	
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	YouChoom();
}

void AGameManager::SetupKeyCollectibleCount()
{
	TArray<AActor*> KeyCollectibles;
	UWorld* World = GetWorld();

	UGameplayStatics::GetAllActorsOfClass(World, AKeyCollectible::StaticClass(), KeyCollectibles);

	totalKeyCollectibles = KeyCollectibles.Num();

	setupKeyCollectibles = true;
}

void AGameManager::YouChoom()
{
	if (totalKeyCollectibles <= 0 && setupKeyCollectibles)
	{
		UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("YouChoomLevel")));
	}
	
}

