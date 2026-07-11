#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordCallOnParticipantChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordCallOnParticipantChangedDynamic, FDiscordUniqueID, UserId, bool, added);

