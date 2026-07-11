#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientCreateOrJoinLobbyCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientCreateOrJoinLobbyCallbackMulticast, UDiscordClientResult*, Result, FDiscordUniqueID, LobbyId);

