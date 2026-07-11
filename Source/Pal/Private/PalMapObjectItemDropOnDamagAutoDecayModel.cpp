#include "PalMapObjectItemDropOnDamagAutoDecayModel.h"

UPalMapObjectItemDropOnDamagAutoDecayModel::UPalMapObjectItemDropOnDamagAutoDecayModel() {
}

bool UPalMapObjectItemDropOnDamagAutoDecayModel::ShouldRustByCharacter_Implementation(APalCharacter* Character) const {
    return false;
}

void UPalMapObjectItemDropOnDamagAutoDecayModel::OnDamageForRust_ServerInternal(UPalMapObjectModel* Model, const FPalDamageInfo& DamageInfo, int32 LastHp) {
}


