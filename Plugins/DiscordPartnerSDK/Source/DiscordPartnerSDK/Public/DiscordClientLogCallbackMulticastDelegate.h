#pragma once
#include "CoreMinimal.h"
#include "EDiscordLoggingSeverity.h"
#include "DiscordClientLogCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientLogCallbackMulticast, const FString&, Message, EDiscordLoggingSeverity, Severity);

