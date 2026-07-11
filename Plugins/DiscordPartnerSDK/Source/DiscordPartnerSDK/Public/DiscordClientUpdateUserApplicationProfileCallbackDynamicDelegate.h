#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateUserApplicationProfileCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientUpdateUserApplicationProfileCallbackDynamic, UDiscordClientResult*, Result);

