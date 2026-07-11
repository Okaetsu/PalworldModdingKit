#pragma once
#include "CoreMinimal.h"
#include "DiscordClientOpenMessageInDiscordCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientOpenMessageInDiscordCallbackDynamic, UDiscordClientResult*, Result);

