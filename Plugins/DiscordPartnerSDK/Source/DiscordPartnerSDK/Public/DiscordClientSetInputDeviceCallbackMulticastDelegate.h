#pragma once
#include "CoreMinimal.h"
#include "DiscordClientSetInputDeviceCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientSetInputDeviceCallbackMulticast, UDiscordClientResult*, Result);

