#pragma once
#include "CoreMinimal.h"
#include "EPalHeliDropOffState.generated.h"

UENUM(BlueprintType)
enum class EPalHeliDropOffState : uint8 {
    Idle,
    Deploying,
    Complete,
    Aborted,
};

