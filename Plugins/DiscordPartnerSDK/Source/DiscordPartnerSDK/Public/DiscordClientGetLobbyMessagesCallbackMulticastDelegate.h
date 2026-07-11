#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetLobbyMessagesCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;
class UDiscordMessageHandle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientGetLobbyMessagesCallbackMulticast, UDiscordClientResult*, Result, const TArray<UDiscordMessageHandle*>&, messages);

