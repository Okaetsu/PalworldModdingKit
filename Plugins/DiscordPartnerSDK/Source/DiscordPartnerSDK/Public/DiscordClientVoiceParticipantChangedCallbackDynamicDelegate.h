#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientVoiceParticipantChangedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDiscordClientVoiceParticipantChangedCallbackDynamic, FDiscordUniqueID, LobbyId, FDiscordUniqueID, memberId, bool, added);

