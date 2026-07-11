#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetOutputDevicesCallbackMulticastDelegate.generated.h"

class UDiscordAudioDevice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientGetOutputDevicesCallbackMulticast, const TArray<UDiscordAudioDevice*>&, devices);

