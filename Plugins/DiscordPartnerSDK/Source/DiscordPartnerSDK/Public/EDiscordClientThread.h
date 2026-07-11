#pragma once
#include "CoreMinimal.h"
#include "EDiscordClientThread.generated.h"

UENUM(BlueprintType)
enum class EDiscordClientThread : uint8 {
    Client,
    Voice,
    Network,
};

