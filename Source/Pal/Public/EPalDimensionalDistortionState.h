#pragma once
#include "CoreMinimal.h"
#include "EPalDimensionalDistortionState.generated.h"

UENUM(BlueprintType)
enum class EPalDimensionalDistortionState : uint8 {
    Idle,
    Tracking,
    Contact,
    Teleporting,
    Returning,
};

