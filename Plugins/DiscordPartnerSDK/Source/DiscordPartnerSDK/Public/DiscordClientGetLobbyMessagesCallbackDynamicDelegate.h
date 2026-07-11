#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetLobbyMessagesCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;
class UDiscordMessageHandle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientGetLobbyMessagesCallbackDynamic, UDiscordClientResult*, Result, const TArray<UDiscordMessageHandle*>&, messages);

