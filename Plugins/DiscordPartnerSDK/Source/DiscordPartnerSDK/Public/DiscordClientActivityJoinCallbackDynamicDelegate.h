#pragma once
#include "CoreMinimal.h"
#include "DiscordClientActivityJoinCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDiscordClientActivityJoinCallbackDynamic, const FString&, joinSecret);

