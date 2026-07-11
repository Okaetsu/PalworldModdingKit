#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetUserGuildsCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;
class UDiscordGuildMinimal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientGetUserGuildsCallbackMulticast, UDiscordClientResult*, Result, const TArray<UDiscordGuildMinimal*>&, guilds);

