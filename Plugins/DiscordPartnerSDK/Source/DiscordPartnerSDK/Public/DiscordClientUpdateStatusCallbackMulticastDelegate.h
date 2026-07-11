#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateStatusCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientUpdateStatusCallbackMulticast, UDiscordClientResult*, Result);

