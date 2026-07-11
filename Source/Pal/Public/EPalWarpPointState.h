#pragma once
#include "CoreMinimal.h"
#include "EPalWarpPointState.generated.h"

UENUM(BlueprintType)
enum class EPalWarpPointState : uint8 {
    Undiscovered,
    Discovered,
    Available,
};

