#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnGetUserInfoCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FOnGetUserInfoCompleted, bool, bSuccess, FGuid, PlayerUId, const FString&, PlayerName, FGuid, GroupId, const FString&, GuildName);

