#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleHardUnlockCondition.generated.h"

UENUM(BlueprintType)
enum class EPalBossBattleHardUnlockCondition : uint8 {
    DefeatHardUnlockTiggerBoss,
    DefeatSameBossNormal,
};

