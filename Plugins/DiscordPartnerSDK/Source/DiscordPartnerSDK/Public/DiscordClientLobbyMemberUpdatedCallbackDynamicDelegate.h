#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientLobbyMemberUpdatedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientLobbyMemberUpdatedCallbackDynamic, FDiscordUniqueID, LobbyId, FDiscordUniqueID, memberId);

