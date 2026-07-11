#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateTokenCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientUpdateTokenCallbackDynamic, UDiscordClientResult*, Result);

