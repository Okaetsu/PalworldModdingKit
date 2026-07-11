#pragma once
#include "CoreMinimal.h"
#include "DiscordClientLinkOrUnlinkChannelCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientLinkOrUnlinkChannelCallbackMulticast, UDiscordClientResult*, Result);

