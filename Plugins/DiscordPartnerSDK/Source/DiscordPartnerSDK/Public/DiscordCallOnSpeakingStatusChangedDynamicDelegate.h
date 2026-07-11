#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordCallOnSpeakingStatusChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordCallOnSpeakingStatusChangedDynamic, FDiscordUniqueID, UserId, bool, isPlayingSound);

