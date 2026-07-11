#pragma once
#include "CoreMinimal.h"
#include "EPalGuildRoleChangeReason.generated.h"

UENUM(BlueprintType)
enum class EPalGuildRoleChangeReason : uint8 {
    Manual,
    GuildCreation,
    AutoTransfer,
    Merge,
    Migration,
};

