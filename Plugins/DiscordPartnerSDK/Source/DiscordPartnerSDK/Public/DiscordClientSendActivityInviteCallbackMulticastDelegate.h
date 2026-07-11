#pragma once
#include "CoreMinimal.h"
#include "DiscordClientSendActivityInviteCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientSendActivityInviteCallbackMulticast, UDiscordClientResult*, Result);

