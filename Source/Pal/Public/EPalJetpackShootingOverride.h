#pragma once
#include "CoreMinimal.h"
#include "EPalJetpackShootingOverride.generated.h"

UENUM(BlueprintType)
enum class EPalJetpackShootingOverride : uint8 {
    None,
    ForceAllow,
    ForceDeny,
};

