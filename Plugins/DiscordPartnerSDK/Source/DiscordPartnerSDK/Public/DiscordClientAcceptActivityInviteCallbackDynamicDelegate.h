#pragma once
#include "CoreMinimal.h"
#include "DiscordClientAcceptActivityInviteCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientAcceptActivityInviteCallbackDynamic, UDiscordClientResult*, Result, const FString&, joinSecret);

