#pragma once
#include "CoreMinimal.h"
#include "PalDamageInfo.h"
#include "PalOnGimmickDamagedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPalOnGimmickDamaged, const FPalDamageInfo&, DamageInfo, float, DamageValue, float, OldHP, float, NewHP);

