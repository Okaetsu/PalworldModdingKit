#pragma once
#include "CoreMinimal.h"
#include "EDiscordAdditionalContentType.generated.h"

UENUM(BlueprintType)
enum class EDiscordAdditionalContentType : uint8 {
    Other,
    Attachment,
    Poll,
    VoiceMessage,
    Thread,
    Embed,
    Sticker,
};

