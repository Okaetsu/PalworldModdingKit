#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientUpdateLobbyMemberCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDiscordClientUpdateLobbyMemberCallbackMulticast, UDiscordClientResult*, Result, FDiscordUniqueID, UserId, FDiscordUniqueID, LobbyId);

