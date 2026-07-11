#pragma once
#include "CoreMinimal.h"
#include "DiscordClientEditUserMessageCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientEditUserMessageCallbackMulticast, UDiscordClientResult*, Result);

