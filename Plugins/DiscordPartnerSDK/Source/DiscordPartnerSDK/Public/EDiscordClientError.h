#pragma once
#include "CoreMinimal.h"
#include "EDiscordClientError.generated.h"

UENUM(BlueprintType)
enum class EDiscordClientError : uint8 {
    None,
    ConnectionFailed,
    UnexpectedClose,
    ConnectionCanceled,
};

