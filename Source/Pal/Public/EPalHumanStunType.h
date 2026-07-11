#pragma once
#include "CoreMinimal.h"
#include "EPalHumanStunType.generated.h"

UENUM(BlueprintType)
enum class EPalHumanStunType : uint8 {
    None,
    flinch,
    Blow,
};

