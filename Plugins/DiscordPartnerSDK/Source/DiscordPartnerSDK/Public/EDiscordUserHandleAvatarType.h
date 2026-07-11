#pragma once
#include "CoreMinimal.h"
#include "EDiscordUserHandleAvatarType.generated.h"

UENUM(BlueprintType)
enum class EDiscordUserHandleAvatarType : uint8 {
    Gif,
    Webp,
    Png,
    Jpeg,
};

