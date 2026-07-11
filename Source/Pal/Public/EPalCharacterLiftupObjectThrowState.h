#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterLiftupObjectThrowState.generated.h"

UENUM(BlueprintType)
enum class EPalCharacterLiftupObjectThrowState : uint8 {
    None,
    BeLiftup,
    BePitching,
    BeReleased,
    BeLanded,
};

