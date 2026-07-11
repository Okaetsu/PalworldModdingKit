#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientUpdateLobbyMemberCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDiscordClientUpdateLobbyMemberCallbackDynamic, UDiscordClientResult*, Result, FDiscordUniqueID, UserId, FDiscordUniqueID, LobbyId);

