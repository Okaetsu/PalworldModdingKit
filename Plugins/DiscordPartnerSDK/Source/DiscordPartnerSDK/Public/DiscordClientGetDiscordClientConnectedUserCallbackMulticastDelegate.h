#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetDiscordClientConnectedUserCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;
class UDiscordUserHandle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientGetDiscordClientConnectedUserCallbackMulticast, UDiscordClientResult*, Result, UDiscordUserHandle*, User);

