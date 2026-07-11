#pragma once
#include "CoreMinimal.h"
#include "EDiscordAuthenticationExternalAuthType.generated.h"

UENUM(BlueprintType)
enum class EDiscordAuthenticationExternalAuthType : uint8 {
    OIDC,
    EpicOnlineServicesAccessToken,
    EpicOnlineServicesIdToken,
    SteamSessionTicket,
    UnityServicesIdToken,
    DiscordBotIssuedAccessToken,
    AppleIdToken,
    PlayStationNetworkIdToken,
};

