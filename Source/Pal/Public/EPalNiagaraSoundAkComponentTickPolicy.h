#pragma once
#include "CoreMinimal.h"
#include "EPalNiagaraSoundAkComponentTickPolicy.generated.h"

UENUM(BlueprintType)
enum class EPalNiagaraSoundAkComponentTickPolicy : uint8 {
    UseAkDefault,
    AlwaysDisable,
};

