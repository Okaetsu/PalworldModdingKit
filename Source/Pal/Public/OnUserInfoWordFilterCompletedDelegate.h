#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnUserInfoWordFilterCompletedDelegate.generated.h"

class UPalUserInfoWordFilterWaiter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnUserInfoWordFilterCompleted, UPalUserInfoWordFilterWaiter*, Waiter, bool, bSuccess, FGuid, PlayerUId, const FString&, FilteredPlayerName, FGuid, GroupId, const FString&, FilteredGuildName);

