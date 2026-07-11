#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetGuildChannelsCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;
class UDiscordGuildChannel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientGetGuildChannelsCallbackMulticast, UDiscordClientResult*, Result, const TArray<UDiscordGuildChannel*>&, guildChannels);

