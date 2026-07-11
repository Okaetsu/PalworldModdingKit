#pragma once
#include "CoreMinimal.h"
#include "EDiscordAuthorizationTokenType.generated.h"

UENUM(BlueprintType)
enum class EDiscordAuthorizationTokenType : uint8 {
    User,
    Bearer,
};

