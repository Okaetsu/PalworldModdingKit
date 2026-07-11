#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientUserUpdatedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientUserUpdatedCallbackDynamic, FDiscordUniqueID, UserId);

