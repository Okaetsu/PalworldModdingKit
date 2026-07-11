#pragma once
#include "CoreMinimal.h"
#include "EPalMultiplayRestrictReason.generated.h"

UENUM(BlueprintType)
enum class EPalMultiplayRestrictReason : uint8 {
    None,
    Unknown,
    NoPremiumFeatures = 10,
    FailToEOSLogin = 20,
    DebugCommand = 99,
};

