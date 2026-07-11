#pragma once
#include "CoreMinimal.h"
#include "DiscordClientDeviceChangeCallbackDynamicDelegate.generated.h"

class UDiscordAudioDevice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientDeviceChangeCallbackDynamic, const TArray<UDiscordAudioDevice*>&, inputDevices, const TArray<UDiscordAudioDevice*>&, outputDevices);

