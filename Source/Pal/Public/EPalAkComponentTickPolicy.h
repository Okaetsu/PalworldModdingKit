#pragma once
#include "CoreMinimal.h"
#include "EPalAkComponentTickPolicy.generated.h"

UENUM(BlueprintType)
enum class EPalAkComponentTickPolicy : uint8 {
    UseComponentDefault,
    TickOnlyWhilePlaying,
};

