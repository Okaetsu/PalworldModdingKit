#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientFetchCurrentUserCallbackMulticastDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDiscordClientFetchCurrentUserCallbackMulticast, UDiscordClientResult*, Result, FDiscordUniqueID, ID, const FString&, Name);

