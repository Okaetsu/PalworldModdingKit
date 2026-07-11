#pragma once
#include "CoreMinimal.h"
#include "EPalDimensionalDistortionState.h"
#include "OnDistortionStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDistortionStateChanged, EPalDimensionalDistortionState, NewState);

