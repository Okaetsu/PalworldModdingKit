#pragma once
#include "CoreMinimal.h"
#include "EPalCommonExpRewardType.generated.h"

UENUM(BlueprintType)
enum class EPalCommonExpRewardType : uint8 {
    Invalid,
    Expedition,
    DefeatBoss,
    Max,
};

