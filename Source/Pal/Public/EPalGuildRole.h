#pragma once
#include "CoreMinimal.h"
#include "EPalGuildRole.generated.h"

UENUM(BlueprintType)
enum class EPalGuildRole : uint8 {
    None,
    GuildMaster,
    SubMaster,
    Member,
    Guest,
};

