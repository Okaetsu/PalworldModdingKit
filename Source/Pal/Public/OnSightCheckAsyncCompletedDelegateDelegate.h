#pragma once
#include "CoreMinimal.h"
#include "OnSightCheckAsyncCompletedDelegateDelegate.generated.h"

class APalCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnSightCheckAsyncCompletedDelegate, bool, bIncludedPlayer, bool, bIncludedAliveNPC, bool, bIncludedEdibleDeadNPC, const TArray<APalCharacter*>&, InSightCharacters);

