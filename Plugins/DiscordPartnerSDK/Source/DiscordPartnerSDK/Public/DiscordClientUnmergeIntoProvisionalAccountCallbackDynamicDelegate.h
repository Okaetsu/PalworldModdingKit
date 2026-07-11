#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUnmergeIntoProvisionalAccountCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientUnmergeIntoProvisionalAccountCallbackDynamic, UDiscordClientResult*, Result);

