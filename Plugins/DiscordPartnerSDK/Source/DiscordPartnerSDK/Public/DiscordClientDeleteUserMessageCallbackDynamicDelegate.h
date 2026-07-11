#pragma once
#include "CoreMinimal.h"
#include "DiscordClientDeleteUserMessageCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientDeleteUserMessageCallbackDynamic, UDiscordClientResult*, Result);

