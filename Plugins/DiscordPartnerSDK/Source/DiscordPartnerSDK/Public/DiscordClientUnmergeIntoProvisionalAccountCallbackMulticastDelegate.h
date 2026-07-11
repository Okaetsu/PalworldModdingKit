#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUnmergeIntoProvisionalAccountCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientUnmergeIntoProvisionalAccountCallbackMulticast, UDiscordClientResult*, Result);

