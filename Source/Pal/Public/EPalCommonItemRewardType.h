#pragma once
#include "CoreMinimal.h"
#include "EPalCommonItemRewardType.generated.h"

UENUM(BlueprintType)
enum class EPalCommonItemRewardType : uint8 {
    Normal,
    BossBattleOneTimeReward,
    RaidBoss,
    Max,
};

