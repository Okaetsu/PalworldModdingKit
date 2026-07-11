#pragma once
#include "CoreMinimal.h"
#include "DiscordClientSetOutputDeviceCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientSetOutputDeviceCallbackMulticast, UDiscordClientResult*, Result);

