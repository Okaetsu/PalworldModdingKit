#pragma once
#include "CoreMinimal.h"
#include "DiscordClientAcceptActivityInviteCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientAcceptActivityInviteCallbackMulticast, UDiscordClientResult*, Result, const FString&, joinSecret);

