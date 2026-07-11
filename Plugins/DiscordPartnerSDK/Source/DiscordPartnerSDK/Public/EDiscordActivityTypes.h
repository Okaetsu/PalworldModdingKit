#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityTypes.generated.h"

UENUM(BlueprintType)
enum class EDiscordActivityTypes : uint8 {
    Playing,
    Streaming,
    Listening,
    Watching,
    CustomStatus,
    Competing,
    HangStatus,
};

