#pragma once
#include "CoreMinimal.h"
#include "PalStatusHUDRemainingTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalStatusHUDRemainingTimeChanged, float, RemainingTime);

