#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientMessageUpdatedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientMessageUpdatedCallbackDynamic, FDiscordUniqueID, MessageId);

