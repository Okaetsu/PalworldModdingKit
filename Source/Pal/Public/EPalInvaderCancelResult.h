#pragma once
#include "CoreMinimal.h"
#include "EPalInvaderCancelResult.generated.h"

UENUM(BlueprintType)
enum class EPalInvaderCancelResult : uint8 {
    Success,
    Failed_NotExistInvader,
    Failed_StartTimeReached,
    Failed_NotEnoughMoney,
    Failed_Unknown,
};

