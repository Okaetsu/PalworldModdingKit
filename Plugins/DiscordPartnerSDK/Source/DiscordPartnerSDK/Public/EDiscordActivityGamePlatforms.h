#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityGamePlatforms.generated.h"

UENUM(BlueprintType)
enum class EDiscordActivityGamePlatforms : uint8 {
    GeneratedUnknownValue__,
    Desktop,
    Xbox,
    Samsung = 4,
    IOS = 8,
    Android = 16,
    Embedded = 32,
    PS4 = 64,
    PS5 = 128,
};

