#pragma once
#include "CoreMinimal.h"
#include "EPalWildlifeSanctuaryAlertState.generated.h"

UENUM(BlueprintType)
enum class EPalWildlifeSanctuaryAlertState : uint8 {
    Normal,
    Detected,
};

