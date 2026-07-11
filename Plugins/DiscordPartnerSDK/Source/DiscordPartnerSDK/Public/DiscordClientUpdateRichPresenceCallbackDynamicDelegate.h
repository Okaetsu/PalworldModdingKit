#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateRichPresenceCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientUpdateRichPresenceCallbackDynamic, UDiscordClientResult*, Result);

