#pragma once
#include "CoreMinimal.h"
#include "OnDistortionMoveCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDistortionMoveCompleted, bool, bSuccess);

