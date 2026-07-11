#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientMessageUpdatedCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientMessageUpdatedCallbackMulticast, FDiscordUniqueID, MessageId);

