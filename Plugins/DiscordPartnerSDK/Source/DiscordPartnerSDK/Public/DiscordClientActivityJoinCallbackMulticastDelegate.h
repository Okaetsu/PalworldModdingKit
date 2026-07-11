#pragma once
#include "CoreMinimal.h"
#include "DiscordClientActivityJoinCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordClientActivityJoinCallbackMulticast, const FString&, joinSecret);

