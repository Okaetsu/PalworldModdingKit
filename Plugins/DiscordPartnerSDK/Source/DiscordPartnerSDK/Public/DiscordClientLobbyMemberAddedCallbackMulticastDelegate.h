#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientLobbyMemberAddedCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientLobbyMemberAddedCallbackMulticast, FDiscordUniqueID, LobbyId, FDiscordUniqueID, memberId);

