#pragma once
#include "CoreMinimal.h"
#include "EDiscordAuthorizationTokenType.h"
#include "DiscordClientTokenExchangeCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_SixParams(FDiscordClientTokenExchangeCallbackDynamic, UDiscordClientResult*, Result, const FString&, accessToken, const FString&, RefreshToken, EDiscordAuthorizationTokenType, tokenType, int32, expiresIn, const FString&, Scopes);

