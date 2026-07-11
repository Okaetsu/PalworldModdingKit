#pragma once
#include "CoreMinimal.h"
#include "DiscordClientRevokeTokenCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientRevokeTokenCallbackDynamic, UDiscordClientResult*, Result);

