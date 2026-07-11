#pragma once
#include "CoreMinimal.h"
#include "EDiscordLoggingSeverity.h"
#include "DiscordClientLogCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientLogCallbackDynamic, const FString&, Message, EDiscordLoggingSeverity, Severity);

