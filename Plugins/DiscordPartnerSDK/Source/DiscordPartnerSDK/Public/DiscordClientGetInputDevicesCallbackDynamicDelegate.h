#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetInputDevicesCallbackDynamicDelegate.generated.h"

class UDiscordAudioDevice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientGetInputDevicesCallbackDynamic, const TArray<UDiscordAudioDevice*>&, devices);

