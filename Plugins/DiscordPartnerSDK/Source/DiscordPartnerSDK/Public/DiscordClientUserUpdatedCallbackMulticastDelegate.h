#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientUserUpdatedCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientUserUpdatedCallbackMulticast, FDiscordUniqueID, UserId);

