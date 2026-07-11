#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetGuildChannelsCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;
class UDiscordGuildChannel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientGetGuildChannelsCallbackDynamic, UDiscordClientResult*, Result, const TArray<UDiscordGuildChannel*>&, guildChannels);

