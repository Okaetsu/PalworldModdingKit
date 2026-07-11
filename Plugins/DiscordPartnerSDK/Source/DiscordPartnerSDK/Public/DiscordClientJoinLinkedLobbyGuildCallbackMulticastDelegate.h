#pragma once
#include "CoreMinimal.h"
#include "DiscordClientJoinLinkedLobbyGuildCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientJoinLinkedLobbyGuildCallbackMulticast, UDiscordClientResult*, Result, const FString&, inviteUrl);

