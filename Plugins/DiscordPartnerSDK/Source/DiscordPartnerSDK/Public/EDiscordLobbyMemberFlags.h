#pragma once
#include "CoreMinimal.h"
#include "EDiscordLobbyMemberFlags.generated.h"

UENUM(BlueprintType)
enum class EDiscordLobbyMemberFlags : uint8 {
    None,
    CanLinkLobby,
};

