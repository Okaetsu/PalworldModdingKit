#pragma once
#include "CoreMinimal.h"
#include "EDiscordClientStatus.generated.h"

UENUM(BlueprintType)
enum class EDiscordClientStatus : uint8 {
    Disconnected,
    Connecting,
    Connected,
    Ready,
    Reconnecting,
    Disconnecting,
    HttpWait,
};

