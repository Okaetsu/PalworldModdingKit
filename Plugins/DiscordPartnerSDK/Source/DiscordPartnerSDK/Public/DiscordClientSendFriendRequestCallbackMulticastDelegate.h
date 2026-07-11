#pragma once
#include "CoreMinimal.h"
#include "DiscordClientSendFriendRequestCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientSendFriendRequestCallbackMulticast, UDiscordClientResult*, Result);

