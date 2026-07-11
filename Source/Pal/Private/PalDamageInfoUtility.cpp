#include "PalDamageInfoUtility.h"

UPalDamageInfoUtility::UPalDamageInfoUtility() {
}

bool UPalDamageInfoUtility::IsExplosionDamage(const FPalDamageInfo& DamageInfo) {
    return false;
}

float UPalDamageInfoUtility::GetSpecialAttackRate(const FPalDamageInfo& DamageInfo, const EPalSpecialAttackRateType Type) {
    return 0.0f;
}


