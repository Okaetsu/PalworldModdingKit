#pragma once
#include "CoreMinimal.h"
#include "EDiscordRelationshipType.generated.h"

UENUM(BlueprintType)
enum class EDiscordRelationshipType : uint8 {
    None,
    Friend,
    Blocked,
    PendingIncoming,
    PendingOutgoing,
    Implicit,
    Suggestion,
};

