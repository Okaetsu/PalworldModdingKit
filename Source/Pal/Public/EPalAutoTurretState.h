#pragma once
#include "CoreMinimal.h"
#include "EPalAutoTurretState.generated.h"

UENUM(BlueprintType)
enum class EPalAutoTurretState : uint8 {
    Inactive,
    Idle,
    Searching,
    Engaging,
};

