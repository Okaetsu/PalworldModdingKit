#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordCallOnSpeakingStatusChangedMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordCallOnSpeakingStatusChangedMulticast, FDiscordUniqueID, UserId, bool, isPlayingSound);

