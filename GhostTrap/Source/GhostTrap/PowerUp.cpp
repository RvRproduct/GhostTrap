// Created By Roberto Reynoso - RvRproduct


#include "PowerUp.h"

#include "APlayerPawn.h"

// Sets default values
APowerUp::APowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APowerUp::BeginPlay()
{
	Super::BeginPlay();

	if (!CollisionComponentReference)
	{

		CollisionComponentReference = FindComponentByClass<UBoxComponent>();

		if (CollisionComponentReference)
		{
			//UE_LOG(LogTemp, Display, TEXT("The Collision Component Found: %s"), *CollisionComponentReference->GetName());
			CollisionComponentReference->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

			// Set the response to overlap with all channels (do not block, only overlap)
			CollisionComponentReference->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
			CollisionComponentReference->OnComponentBeginOverlap.AddDynamic(this, &APowerUp::OnOverlapBegin);
		}
		else
		{
			//UE_LOG(LogTemp, Display, TEXT("The Collision Component Not Found"));
		}

	}
	
}

// Called every frame
void APowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}

void APowerUp::OnOverlapBegin(UPrimitiveComponent* OverlapComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (AAPlayerPawn* hitPlayerActor = Cast<AAPlayerPawn>(OtherActor))
		{
			if (!hitPlayerActor->hasPowerUp)
			{
				hitPlayerActor->hasPowerUp = true;
				hitPlayerActor->maxSpeed = 800.0f;
				Destroy();
			}
		}
	}
}

