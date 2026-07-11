#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalGuildRole.h"
#include "OnGuildRoleChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGuildRoleChanged, const FGuid&, PlayerUId, EPalGuildRole, OldRole, EPalGuildRole, NewRole);

