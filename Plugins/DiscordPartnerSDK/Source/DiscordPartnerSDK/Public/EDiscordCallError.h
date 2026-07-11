#pragma once
#include "CoreMinimal.h"
#include "EDiscordCallError.generated.h"

UENUM(BlueprintType)
enum class EDiscordCallError : uint8 {
    None,
    SignalingConnectionFailed,
    SignalingUnexpectedClose,
    VoiceConnectionFailed,
    JoinTimeout,
    Forbidden,
};

