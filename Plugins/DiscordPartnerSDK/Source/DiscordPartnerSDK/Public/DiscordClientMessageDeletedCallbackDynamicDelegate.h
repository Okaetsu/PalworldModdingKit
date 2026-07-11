#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientMessageDeletedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientMessageDeletedCallbackDynamic, FDiscordUniqueID, MessageId, FDiscordUniqueID, ChannelId);

