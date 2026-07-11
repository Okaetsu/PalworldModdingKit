#pragma once
#include "CoreMinimal.h"
#include "DiscordClientOpenMessageInDiscordCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientOpenMessageInDiscordCallbackMulticast, UDiscordClientResult*, Result);

