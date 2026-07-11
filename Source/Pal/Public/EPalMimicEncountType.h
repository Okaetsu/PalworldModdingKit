#pragma once
#include "CoreMinimal.h"
#include "EPalMimicEncountType.generated.h"

UENUM(BlueprintType)
enum class EPalMimicEncountType : uint8 {
    None,
    Battle,
    Escape,
};

