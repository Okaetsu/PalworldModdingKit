#pragma once
#include "CoreMinimal.h"
#include "EPalPalWildlifeSanctuarySplineEventType.generated.h"

UENUM(BlueprintType)
enum class EPalPalWildlifeSanctuarySplineEventType : uint8 {
    None,
    Stop,
    LookAround,
};

