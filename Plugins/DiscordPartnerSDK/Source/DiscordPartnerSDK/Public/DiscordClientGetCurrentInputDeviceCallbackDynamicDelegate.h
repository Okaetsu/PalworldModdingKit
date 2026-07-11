#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetCurrentInputDeviceCallbackDynamicDelegate.generated.h"

class UDiscordAudioDevice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientGetCurrentInputDeviceCallbackDynamic, UDiscordAudioDevice*, device);

