#pragma once
#include "CoreMinimal.h"
#include "EDiscordStatusType.generated.h"

UENUM(BlueprintType)
enum class EDiscordStatusType : uint8 {
    Online,
    Offline,
    Blocked,
    Idle,
    Dnd,
    Invisible,
    Streaming,
    Unknown,
};

