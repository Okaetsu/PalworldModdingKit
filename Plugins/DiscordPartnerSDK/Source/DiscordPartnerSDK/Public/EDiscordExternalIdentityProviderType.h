#pragma once
#include "CoreMinimal.h"
#include "EDiscordExternalIdentityProviderType.generated.h"

UENUM(BlueprintType)
enum class EDiscordExternalIdentityProviderType : uint8 {
    OIDC,
    EpicOnlineServices,
    Steam,
    Unity,
    DiscordBot,
    None,
    Unknown,
};

