#pragma once
#include "CoreMinimal.h"
#include "DiscordClientAuthorizationCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDiscordClientAuthorizationCallbackMulticast, UDiscordClientResult*, Result, const FString&, code, const FString&, redirectUri);

