#pragma once
#include "CoreMinimal.h"
#include "DiscordUniqueID.h"
#include "DiscordClientActivityJoinWithApplicationCallbackDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDiscordClientActivityJoinWithApplicationCallbackDynamic, FDiscordUniqueID, ApplicationId, const FString&, joinSecret);

