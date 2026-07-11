#pragma once
#include "CoreMinimal.h"
#include "EPalStatusHitType.generated.h"

UENUM(BlueprintType)
enum class EPalStatusHitType : uint8 {
    None,
    Hidden,
    Burn,
    Lava,
    Acid,
    SwimSpeedUp,
    Max,
};

