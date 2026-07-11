#pragma once
#include "CoreMinimal.h"
#include "EPalGuildPermission.h"
#include "EPalGuildRole.h"
#include "OnGuildPermissionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGuildPermissionChanged, EPalGuildRole, Role, const TArray<EPalGuildPermission>&, NewPermissions);

