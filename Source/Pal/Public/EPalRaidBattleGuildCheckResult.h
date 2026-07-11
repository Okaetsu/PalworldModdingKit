#pragma once
#include "CoreMinimal.h"
#include "EPalRaidBattleGuildCheckResult.generated.h"

UENUM(BlueprintType)
enum class EPalRaidBattleGuildCheckResult : uint8 {
    Allow,
    RejectByGuildConcurrent,
    RejectByGuildResolveFailure,
};

