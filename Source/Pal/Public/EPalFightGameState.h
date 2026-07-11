#pragma once
#include "CoreMinimal.h"
#include "EPalFightGameState.generated.h"

UENUM(BlueprintType)
enum class EPalFightGameState : uint8 {
    Idle,
    Active,
    Succeeded,
    Failed,
};

