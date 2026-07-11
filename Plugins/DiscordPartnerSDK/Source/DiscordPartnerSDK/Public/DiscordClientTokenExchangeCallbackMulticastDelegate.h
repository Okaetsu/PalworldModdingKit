#pragma once
#include "CoreMinimal.h"
#include "EDiscordAuthorizationTokenType.h"
#include "DiscordClientTokenExchangeCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FDiscordClientTokenExchangeCallbackMulticast, UDiscordClientResult*, Result, const FString&, accessToken, const FString&, RefreshToken, EDiscordAuthorizationTokenType, tokenType, int32, expiresIn, const FString&, Scopes);

