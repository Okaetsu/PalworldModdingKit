#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUserMessagesWithLimitCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;
class UDiscordMessageHandle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientUserMessagesWithLimitCallbackDynamic, UDiscordClientResult*, Result, const TArray<UDiscordMessageHandle*>&, messages);

