#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnGuildAutoTransferredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGuildAutoTransferred, const FGuid&, OldMasterUId, const FGuid&, NewMasterUId);

