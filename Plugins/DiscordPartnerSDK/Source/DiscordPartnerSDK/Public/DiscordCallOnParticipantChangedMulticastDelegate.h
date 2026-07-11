#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordCallOnParticipantChangedMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordCallOnParticipantChangedMulticast, FDiscordUniqueID, UserId, bool, added);

