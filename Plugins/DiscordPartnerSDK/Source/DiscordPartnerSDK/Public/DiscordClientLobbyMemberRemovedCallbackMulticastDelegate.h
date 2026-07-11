#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientLobbyMemberRemovedCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientLobbyMemberRemovedCallbackMulticast, FDiscordUniqueID, LobbyId, FDiscordUniqueID, memberId);

