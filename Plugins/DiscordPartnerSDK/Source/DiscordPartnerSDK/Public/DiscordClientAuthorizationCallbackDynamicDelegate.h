#pragma once
#include "CoreMinimal.h"
#include "DiscordClientAuthorizationCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDiscordClientAuthorizationCallbackDynamic, UDiscordClientResult*, Result, const FString&, code, const FString&, redirectUri);

