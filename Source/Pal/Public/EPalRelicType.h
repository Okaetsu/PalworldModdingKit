#pragma once
#include "CoreMinimal.h"
#include "EPalRelicType.generated.h"

UENUM(BlueprintType)
enum class EPalRelicType : uint8 {
    CapturePower,
    HungerReduction,
    SwimSpeed,
    FoodDecayReduction,
    JumpPower,
    GliderSpeed,
    ClimbSpeed,
    StatusAilmentResist,
    StaminaReduction,
    SphereHoming,
    ExpBonus,
    RainbowPassiveRate,
    MoveSpeed,
    Max,
};

