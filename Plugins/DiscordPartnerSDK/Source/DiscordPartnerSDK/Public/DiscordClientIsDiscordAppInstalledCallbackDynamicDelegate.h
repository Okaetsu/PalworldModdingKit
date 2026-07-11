#pragma once
#include "CoreMinimal.h"
#include "DiscordClientIsDiscordAppInstalledCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientIsDiscordAppInstalledCallbackDynamic, bool, installed);

