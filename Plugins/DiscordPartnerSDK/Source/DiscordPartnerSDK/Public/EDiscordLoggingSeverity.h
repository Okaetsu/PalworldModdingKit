#pragma once
#include "CoreMinimal.h"
#include "EDiscordLoggingSeverity.generated.h"

UENUM(BlueprintType)
enum class EDiscordLoggingSeverity : uint8 {
    GeneratedUnknownValue__,
    Verbose,
    Info,
    Warning,
    Error,
    None,
};

