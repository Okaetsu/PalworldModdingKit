#pragma once
#include "CoreMinimal.h"
#include "ECapturedPalPendingOp.generated.h"

UENUM(BlueprintType)
enum class ECapturedPalPendingOp : uint8 {
    None,
    CreatingHandle,
    Spawning,
    Despawning,
};

