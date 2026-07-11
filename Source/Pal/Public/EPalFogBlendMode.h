#pragma once
#include "CoreMinimal.h"
#include "EPalFogBlendMode.generated.h"

UENUM(BlueprintType)
enum class EPalFogBlendMode : uint8 {
    WeightedAverage,
    Multiplicative,
    Additive,
    Maximum,
    Minimum,
    Override,
};

