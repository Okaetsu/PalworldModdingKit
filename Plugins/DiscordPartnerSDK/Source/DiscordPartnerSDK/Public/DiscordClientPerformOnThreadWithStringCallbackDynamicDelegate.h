#pragma once
#include "CoreMinimal.h"
#include "DiscordClientPerformOnThreadWithStringCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientPerformOnThreadWithStringCallbackDynamic, const FString&, Text);

