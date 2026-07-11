#pragma once
#include "CoreMinimal.h"
#include "OnPalFightEnemyCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPalFightEnemyCountChanged, int32, Remaining, int32, Total);

