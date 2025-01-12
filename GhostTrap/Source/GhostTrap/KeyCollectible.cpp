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

	if (!CollisionComponentReference)
	{

		CollisionComponentReference = FindComponentByClass<UBoxComponent>();

		if (CollisionComponentReference)
		{
			UE_LOG(LogTemp, Display, TEXT("The Collision Component Found: %s"), *CollisionComponentReference->GetName());
			CollisionComponentReference->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			CollisionComponentReference->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
			CollisionComponentReference->OnComponentBeginOverlap.AddDynamic(this, &AKeyCollectible::OnOverlapBegin);
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("The Collision Component Not Found"));
		}

	}
	
}

// Called every frame
void AKeyCollectible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKeyCollectible::OnOverlapBegin(UPrimitiveComponent* OverlapComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (AAPlayerPawn* hitPlayerPawn = Cast<AAPlayerPawn>(OtherActor))
		{
			GameManager->totalKeyCollectibles -= 1;
			Destroy();
		}
	}
}

