#pragma once
#include "CoreMinimal.h"
#include "EDiscordRelationshipGroupType.generated.h"

UENUM(BlueprintType)
enum class EDiscordRelationshipGroupType : uint8 {
    OnlinePlayingGame,
    OnlineElsewhere,
    Offline,
};

