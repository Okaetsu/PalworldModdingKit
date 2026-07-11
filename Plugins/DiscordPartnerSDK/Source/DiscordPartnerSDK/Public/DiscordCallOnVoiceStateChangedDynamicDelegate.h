#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordCallOnVoiceStateChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordCallOnVoiceStateChangedDynamic, FDiscordUniqueID, UserId);

