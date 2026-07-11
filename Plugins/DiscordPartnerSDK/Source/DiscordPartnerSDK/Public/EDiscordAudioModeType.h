#pragma once
#include "CoreMinimal.h"
#include "EDiscordAudioModeType.generated.h"

UENUM(BlueprintType)
enum class EDiscordAudioModeType : uint8 {
    MODE_UNINIT,
    MODE_VAD,
    MODE_PTT,
};

