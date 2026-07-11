#pragma once
#include "CoreMinimal.h"
#include "EPalAsyncMoveStatus.generated.h"

UENUM(BlueprintType)
enum class EPalAsyncMoveStatus : uint8 {
    Pending,
    PathFound,
    Moving,
    Succeeded,
    Failed,
    Cancelled,
};

