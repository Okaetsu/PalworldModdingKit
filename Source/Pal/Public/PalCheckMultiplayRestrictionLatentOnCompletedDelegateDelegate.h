#pragma once
#include "CoreMinimal.h"
#include "EPalMultiplayRestrictReason.h"
#include "PalCheckMultiplayRestrictionLatentOnCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPalCheckMultiplayRestrictionLatentOnCompletedDelegate, bool, bIsReset, bool, bCanPlay, EPalMultiplayRestrictReason, MultiplayRestrictReason);

