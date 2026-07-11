#pragma once
#include "CoreMinimal.h"
#include "EPalFoliageInstanceState.generated.h"

UENUM(BlueprintType)
enum class EPalFoliageInstanceState : uint8 {
    Alive,
    Decaying,
    Dead,
};

