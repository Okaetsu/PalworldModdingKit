#pragma once
#include "CoreMinimal.h"
#include "DiscordClientRevokeTokenCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientRevokeTokenCallbackMulticast, UDiscordClientResult*, Result);

