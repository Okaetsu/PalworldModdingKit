#pragma once
#include "CoreMinimal.h"
#include "EPalOneStrokeGameState.generated.h"

UENUM(BlueprintType)
enum class EPalOneStrokeGameState : uint8 {
    NotInitialized,
    Pause,
    InGame,
    Success,
    Failed,
};

