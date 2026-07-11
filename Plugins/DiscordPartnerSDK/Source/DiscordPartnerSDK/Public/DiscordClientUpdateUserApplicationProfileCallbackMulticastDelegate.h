#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUpdateUserApplicationProfileCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientUpdateUserApplicationProfileCallbackMulticast, UDiscordClientResult*, Result);

