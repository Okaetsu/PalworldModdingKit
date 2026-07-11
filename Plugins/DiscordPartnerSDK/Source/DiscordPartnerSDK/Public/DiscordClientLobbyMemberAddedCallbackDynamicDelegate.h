#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientLobbyMemberAddedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientLobbyMemberAddedCallbackDynamic, FDiscordUniqueID, LobbyId, FDiscordUniqueID, memberId);

