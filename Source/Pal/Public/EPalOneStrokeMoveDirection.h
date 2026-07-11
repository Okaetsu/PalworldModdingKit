#pragma once
#include "CoreMinimal.h"
#include "EPalOneStrokeMoveDirection.generated.h"

UENUM(BlueprintType)
enum class EPalOneStrokeMoveDirection : uint8 {
    Up,
    Down,
    Left,
    Right,
};

