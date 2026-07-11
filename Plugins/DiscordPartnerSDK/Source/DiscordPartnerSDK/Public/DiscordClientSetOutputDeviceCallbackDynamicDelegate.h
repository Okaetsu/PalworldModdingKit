#pragma once
#include "CoreMinimal.h"
#include "DiscordClientSetOutputDeviceCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientSetOutputDeviceCallbackDynamic, UDiscordClientResult*, Result);

