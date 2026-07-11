#pragma once
#include "CoreMinimal.h"
#include "EPalOneStrokeTileState.generated.h"

UENUM(BlueprintType)
enum class EPalOneStrokeTileState : uint8 {
    Empty,
    Visited,
    Start,
    Goal,
    Current,
    Obstacle,
};

