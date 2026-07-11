#pragma once
#include "CoreMinimal.h"
#include "EDiscordCallStatus.generated.h"

UENUM(BlueprintType)
enum class EDiscordCallStatus : uint8 {
    Disconnected,
    Joining,
    Connecting,
    SignalingConnected,
    Connected,
    Reconnecting,
    Disconnecting,
};

