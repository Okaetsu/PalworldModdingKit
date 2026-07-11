#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityActionTypes.generated.h"

UENUM(BlueprintType)
enum class EDiscordActivityActionTypes : uint8 {
    Invalid,
    Join,
    JoinRequest = 5,
};

