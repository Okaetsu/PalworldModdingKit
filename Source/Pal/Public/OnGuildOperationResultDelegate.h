#pragma once
#include "CoreMinimal.h"
#include "EPalGroupOperationResult.h"
#include "OnGuildOperationResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGuildOperationResult, EPalGroupOperationResult, Result);

