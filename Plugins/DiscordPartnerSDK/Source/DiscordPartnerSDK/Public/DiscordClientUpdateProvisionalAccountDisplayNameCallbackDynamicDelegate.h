#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateProvisionalAccountDisplayNameCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientUpdateProvisionalAccountDisplayNameCallbackDynamic, UDiscordClientResult*, Result);

