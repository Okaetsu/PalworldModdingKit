#pragma once
#include "CoreMinimal.h"
#include "DiscordClientDeviceChangeCallbackMulticastDelegate.generated.h"

class UDiscordAudioDevice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientDeviceChangeCallbackMulticast, const TArray<UDiscordAudioDevice*>&, inputDevices, const TArray<UDiscordAudioDevice*>&, outputDevices);

