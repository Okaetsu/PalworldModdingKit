#pragma once
#include "CoreMinimal.h"
#include "DiscordClientUserMessageSummariesCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;
class UDiscordUserMessageSummary;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientUserMessageSummariesCallbackDynamic, UDiscordClientResult*, Result, const TArray<UDiscordUserMessageSummary*>&, summaries);

