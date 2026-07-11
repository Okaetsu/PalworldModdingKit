#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetDiscordClientConnectedUserCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;
class UDiscordUserHandle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientGetDiscordClientConnectedUserCallbackDynamic, UDiscordClientResult*, Result, UDiscordUserHandle*, User);

