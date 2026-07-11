#include "PalWeaponBulletSelector.h"

UPalWeaponBulletSelector::UPalWeaponBulletSelector() {
}

void UPalWeaponBulletSelector::SetBulletId_Local(const APalWeaponBase* TargetWeapon, const FName& BulletItemId) {
}

void UPalWeaponBulletSelector::ReserveSelectPrevBullet(const APalWeaponBase* Weapon) {
}

void UPalWeaponBulletSelector::ReserveSelectNextBullet(const APalWeaponBase* Weapon) {
}

void UPalWeaponBulletSelector::OnInventoryContainerUpdated(UPalItemContainer* Container) {
}

void UPalWeaponBulletSelector::GetSelectableBulletItemIds(const APalWeaponBase* Weapon, TArray<FName>& OutSelectableBulletIds) const {
}

FName UPalWeaponBulletSelector::GetCurrentBulletId(const APalWeaponBase* Weapon) const {
    return NAME_None;
}


