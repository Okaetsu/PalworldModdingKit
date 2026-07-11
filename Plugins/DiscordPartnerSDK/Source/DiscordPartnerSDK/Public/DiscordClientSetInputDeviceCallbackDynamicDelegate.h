#pragma once
#include "CoreMinimal.h"
#include "DiscordClientSetInputDeviceCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientSetInputDeviceCallbackDynamic, UDiscordClientResult*, Result);

