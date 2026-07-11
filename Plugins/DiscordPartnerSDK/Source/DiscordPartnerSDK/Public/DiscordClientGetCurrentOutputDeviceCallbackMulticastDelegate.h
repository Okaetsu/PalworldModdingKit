#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetCurrentOutputDeviceCallbackMulticastDelegate.generated.h"

class UDiscordAudioDevice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientGetCurrentOutputDeviceCallbackMulticast, UDiscordAudioDevice*, device);

