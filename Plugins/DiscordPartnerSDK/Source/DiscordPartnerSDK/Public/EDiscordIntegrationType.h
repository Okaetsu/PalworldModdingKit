#pragma once
#include "CoreMinimal.h"
#include "EDiscordIntegrationType.generated.h"

UENUM(BlueprintType)
enum class EDiscordIntegrationType : uint8 {
    GuildInstall,
    UserInstall,
};

