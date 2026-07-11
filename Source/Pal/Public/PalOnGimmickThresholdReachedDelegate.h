#pragma once
#include "CoreMinimal.h"
#include "PalOnGimmickThresholdReachedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalOnGimmickThresholdReached, FName, ThresholdName);

