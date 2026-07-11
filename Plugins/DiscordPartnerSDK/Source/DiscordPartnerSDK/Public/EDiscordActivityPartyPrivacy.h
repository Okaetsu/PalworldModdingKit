#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityPartyPrivacy.generated.h"

UENUM(BlueprintType)
enum class EDiscordActivityPartyPrivacy : uint8 {
    Private,
    Public,
};

