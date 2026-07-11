#pragma once
#include "CoreMinimal.h"
#include "DiscordClientDeleteUserMessageCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientDeleteUserMessageCallbackMulticast, UDiscordClientResult*, Result);

