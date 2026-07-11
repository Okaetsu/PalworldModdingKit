#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientActivityJoinWithApplicationCallbackMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscordClientActivityJoinWithApplicationCallbackMulticast, FDiscordUniqueID, ApplicationId, const FString&, joinSecret);

