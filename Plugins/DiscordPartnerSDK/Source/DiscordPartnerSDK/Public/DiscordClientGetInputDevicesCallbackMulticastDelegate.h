#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetInputDevicesCallbackMulticastDelegate.generated.h"

class UDiscordAudioDevice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientGetInputDevicesCallbackMulticast, const TArray<UDiscordAudioDevice*>&, devices);

