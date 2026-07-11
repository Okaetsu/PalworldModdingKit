#pragma once
#include "CoreMinimal.h"
#include "DiscordClientSendFriendRequestCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientSendFriendRequestCallbackDynamic, UDiscordClientResult*, Result);

