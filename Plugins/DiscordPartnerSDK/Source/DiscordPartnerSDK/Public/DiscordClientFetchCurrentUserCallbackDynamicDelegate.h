#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientFetchCurrentUserCallbackDynamicDelegate.generated.h"

class UDiscordClientResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDiscordClientFetchCurrentUserCallbackDynamic, UDiscordClientResult*, Result, FDiscordUniqueID, ID, const FString&, Name);

