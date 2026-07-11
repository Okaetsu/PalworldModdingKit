#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateTokenCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientUpdateTokenCallbackMulticast, UDiscordClientResult*, Result);

