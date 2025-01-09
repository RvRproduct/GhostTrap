// Created By Roberto Reynoso - RvRproduct

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AWaypointActor.generated.h"

UCLASS()
class GHOSTTRAP_API AAWaypointActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAWaypointActor();

public:
	bool pathLeft;
	bool pathRight;
	bool pathUp;
	bool pathDown;
};
