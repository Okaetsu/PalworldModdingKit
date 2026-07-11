#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectGroupType.generated.h"

UENUM(BlueprintType)
enum class EPalPassiveSkillEffectGroupType : uint8 {
    None,
    Element,
    AdditionalEffect,
    PlayerElementStepAttack,
};

