#pragma once
#include "CoreMinimal.h"
#include "DiscordClientLeaveLobbyCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientLeaveLobbyCallbackDynamic, UDiscordClientResult*, Result);

