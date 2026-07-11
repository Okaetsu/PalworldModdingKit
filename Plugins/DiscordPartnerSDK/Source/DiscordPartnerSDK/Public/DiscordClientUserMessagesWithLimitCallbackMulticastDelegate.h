#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUserMessagesWithLimitCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;
class UDiscordMessageHandle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientUserMessagesWithLimitCallbackMulticast, UDiscordClientResult*, Result, const TArray<UDiscordMessageHandle*>&, messages);

