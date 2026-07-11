#pragma once
#include "CoreMinimal.h"
#include "DiscordClientLeaveLobbyCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientLeaveLobbyCallbackMulticast, UDiscordClientResult*, Result);

