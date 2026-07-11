#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUserMessageSummariesCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;
class UDiscordUserMessageSummary;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientUserMessageSummariesCallbackMulticast, UDiscordClientResult*, Result, const TArray<UDiscordUserMessageSummary*>&, summaries);

