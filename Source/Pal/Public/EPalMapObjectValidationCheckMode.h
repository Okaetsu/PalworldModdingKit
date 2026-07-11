#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectValidationCheckMode.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectValidationCheckMode : uint8 {
    UseAccessTypeDefault,
    Force,
    Skip,
};

