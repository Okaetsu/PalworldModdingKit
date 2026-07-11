#pragma once
#include "CoreMinimal.h"
#include "PalStatusHUDStackCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalStatusHUDStackCountChanged, int32, NewStackCount);

