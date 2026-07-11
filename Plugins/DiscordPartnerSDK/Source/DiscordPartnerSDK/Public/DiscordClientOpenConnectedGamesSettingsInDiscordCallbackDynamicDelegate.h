#pragma once
#include "CoreMinimal.h"
#include "DiscordClientOpenConnectedGamesSettingsInDiscordCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientOpenConnectedGamesSettingsInDiscordCallbackDynamic, UDiscordClientResult*, Result);

