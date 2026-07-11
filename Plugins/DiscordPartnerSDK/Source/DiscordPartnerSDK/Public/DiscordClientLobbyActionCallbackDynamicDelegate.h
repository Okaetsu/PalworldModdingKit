#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientLobbyActionCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientLobbyActionCallbackDynamic, UDiscordClientResult*, Result, FDiscordUniqueID, LobbyId);

