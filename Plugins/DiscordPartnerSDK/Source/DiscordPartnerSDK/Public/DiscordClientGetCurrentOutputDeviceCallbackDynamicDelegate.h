#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetCurrentOutputDeviceCallbackDynamicDelegate.generated.h"

class UDiscordAudioDevice;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientGetCurrentOutputDeviceCallbackDynamic, UDiscordAudioDevice*, device);

