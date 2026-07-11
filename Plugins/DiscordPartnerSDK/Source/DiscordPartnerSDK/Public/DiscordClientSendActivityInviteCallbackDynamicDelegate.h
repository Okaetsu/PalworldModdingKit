#pragma once
#include "CoreMinimal.h"
#include "DiscordClientSendActivityInviteCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientSendActivityInviteCallbackDynamic, UDiscordClientResult*, Result);

