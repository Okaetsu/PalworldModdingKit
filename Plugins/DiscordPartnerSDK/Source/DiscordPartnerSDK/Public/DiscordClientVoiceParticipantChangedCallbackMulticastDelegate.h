#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientVoiceParticipantChangedCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDiscordClientVoiceParticipantChangedCallbackMulticast, FDiscordUniqueID, LobbyId, FDiscordUniqueID, memberId, bool, added);

