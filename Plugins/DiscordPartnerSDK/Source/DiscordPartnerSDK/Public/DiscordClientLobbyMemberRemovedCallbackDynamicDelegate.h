#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientLobbyMemberRemovedCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientLobbyMemberRemovedCallbackDynamic, FDiscordUniqueID, LobbyId, FDiscordUniqueID, memberId);

