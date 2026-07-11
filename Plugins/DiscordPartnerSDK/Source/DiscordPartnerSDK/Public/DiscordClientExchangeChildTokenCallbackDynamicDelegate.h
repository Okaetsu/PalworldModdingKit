#pragma once
#include "CoreMinimal.h"
#include "EDiscordAuthorizationTokenType.h"
#include "DiscordClientExchangeChildTokenCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FDiscordClientExchangeChildTokenCallbackDynamic, UDiscordClientResult*, Result, const FString&, accessToken, EDiscordAuthorizationTokenType, tokenType, int32, expiresIn, const FString&, Scopes);

