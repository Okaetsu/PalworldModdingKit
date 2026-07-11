#pragma once
#include "CoreMinimal.h"
#include "OnUpdateUnlockStateDelegateDelegate.generated.h"

class APalLevelObjectWarpPointDestination;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateUnlockStateDelegate, APalLevelObjectWarpPointDestination*, WarpPointDestination);

