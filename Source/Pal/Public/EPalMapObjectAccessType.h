#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectAccessType.generated.h"

UENUM(BlueprintType)
enum class EPalMapObjectAccessType : uint8 {
    Anyone,
    SameGuildOnly,
    GuildSecurityAware,
    SecuritySettings,
    BasePalOperation,
    BuildConstruct,
    PalBoxConstruct,
};

