#pragma once
#include "CoreMinimal.h"
#include "EPalFightUINotify.generated.h"

UENUM(BlueprintType)
enum class EPalFightUINotify : uint8 {
    Start,
    Leave,
    Timeout,
    Clear,
};

