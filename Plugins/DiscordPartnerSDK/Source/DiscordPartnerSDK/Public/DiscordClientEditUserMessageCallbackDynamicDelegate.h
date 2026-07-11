#pragma once
#include "CoreMinimal.h"
#include "DiscordClientEditUserMessageCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientEditUserMessageCallbackDynamic, UDiscordClientResult*, Result);

