#pragma once
#include "CoreMinimal.h"
#include "DiscordClientIsDiscordAppInstalledCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientIsDiscordAppInstalledCallbackMulticast, bool, installed);

