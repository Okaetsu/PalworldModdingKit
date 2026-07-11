#pragma once
#include "CoreMinimal.h"
#include "DiscordClientGetUserGuildsCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;
class UDiscordGuildMinimal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientGetUserGuildsCallbackDynamic, UDiscordClientResult*, Result, const TArray<UDiscordGuildMinimal*>&, guilds);

