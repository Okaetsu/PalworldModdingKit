#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnGuildNameUpdatedWithGroupIdDelegate.generated.h"

class UPalGuildNameUpdateWatcher;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGuildNameUpdatedWithGroupId, UPalGuildNameUpdateWatcher*, Watcher, FGuid, GroupId, const FString&, NewGuildName);

