#pragma once
#include "CoreMinimal.h"
#include "EDiscordAuthorizationTokenType.h"
#include "DiscordClientExchangeChildTokenCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FDiscordClientExchangeChildTokenCallbackMulticast, UDiscordClientResult*, Result, const FString&, accessToken, EDiscordAuthorizationTokenType, tokenType, int32, expiresIn, const FString&, Scopes);

