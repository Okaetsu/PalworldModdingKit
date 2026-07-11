#pragma once
#include "CoreMinimal.h"
#include "OnWarpPointUnlockStateChangedDelegate.generated.h"

class APalLevelObjectWarpPointToLocation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarpPointUnlockStateChanged, APalLevelObjectWarpPointToLocation*, This);

