#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateRichPresenceCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientUpdateRichPresenceCallbackMulticast, UDiscordClientResult*, Result);

