#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnWarpCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarpCompleted, FTransform, DestinationTransform);

