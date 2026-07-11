#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetOutputDevicesCallbackDynamicDelegate.generated.h"

class UDiscordAudioDevice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientGetOutputDevicesCallbackDynamic, const TArray<UDiscordAudioDevice*>&, devices);

