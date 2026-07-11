#pragma once
#include "CoreMinimal.h"
#include "EPalGuildNotificationType.generated.h"

UENUM(BlueprintType)
enum class EPalGuildNotificationType : uint8 {
    Join,
    Leave,
    Login,
    Logout,
};

