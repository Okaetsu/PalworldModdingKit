#pragma once
#include "CoreMinimal.h"
#include "DiscordClientJoinLinkedLobbyGuildCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientJoinLinkedLobbyGuildCallbackDynamic, UDiscordClientResult*, Result, const FString&, inviteUrl);

