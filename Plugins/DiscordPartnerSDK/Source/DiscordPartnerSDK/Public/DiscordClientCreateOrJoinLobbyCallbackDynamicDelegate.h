#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientCreateOrJoinLobbyCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientCreateOrJoinLobbyCallbackDynamic, UDiscordClientResult*, Result, FDiscordUniqueID, LobbyId);

