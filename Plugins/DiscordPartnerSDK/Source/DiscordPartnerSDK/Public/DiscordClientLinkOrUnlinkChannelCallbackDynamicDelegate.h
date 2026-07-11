#pragma once
#include "CoreMinimal.h"
#include "DiscordClientLinkOrUnlinkChannelCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientLinkOrUnlinkChannelCallbackDynamic, UDiscordClientResult*, Result);

