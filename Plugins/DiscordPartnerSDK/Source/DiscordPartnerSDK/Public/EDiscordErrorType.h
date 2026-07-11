#pragma once
#include "CoreMinimal.h"
#include "EDiscordErrorType.generated.h"

UENUM(BlueprintType)
enum class EDiscordErrorType : uint8 {
    None,
    NetworkError,
    HTTPError,
    ClientNotReady,
    Disabled,
    ClientDestroyed,
    ValidationError,
    Aborted,
    AuthorizationFailed,
    RPCError,
};

