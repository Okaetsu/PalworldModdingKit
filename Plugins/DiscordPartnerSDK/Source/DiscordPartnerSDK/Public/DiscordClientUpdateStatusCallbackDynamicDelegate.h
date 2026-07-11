#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateStatusCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientUpdateStatusCallbackDynamic, UDiscordClientResult*, Result);

