#pragma once
#include "CoreMinimal.h"
#include "EPalFightGameState.h"
#include "OnPalFightGameStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPalFightGameStateChanged, EPalFightGameState, NewState, EPalFightGameState, OldState);

