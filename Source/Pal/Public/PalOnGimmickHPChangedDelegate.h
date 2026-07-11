#pragma once
#include "CoreMinimal.h"
#include "PalOnGimmickHPChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalOnGimmickHPChanged, float, NewHP, float, MaxHP);

