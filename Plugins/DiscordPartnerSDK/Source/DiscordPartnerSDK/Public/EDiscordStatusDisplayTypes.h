#pragma once
#include "CoreMinimal.h"
#include "EDiscordStatusDisplayTypes.generated.h"

UENUM(BlueprintType)
enum class EDiscordStatusDisplayTypes : uint8 {
    Name,
    State,
    Details,
};

