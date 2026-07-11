#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigNPCSpawnerCheckResultType.generated.h"

UENUM(BlueprintType)
enum class EPalOilrigNPCSpawnerCheckResultType : uint8 {
    Ignore,
    Spawn,
    Despawn,
};

