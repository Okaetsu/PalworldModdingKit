#include "PalNPCWeaponCombatInfo.h"

FPalNPCWeaponCombatInfo::FPalNPCWeaponCombatInfo() {
    this->CombatAIActionClass = NULL;
    this->NPCWeaponRange_Near_cm = 300;
    this->NPCWeaponRange_Far_cm = 5000;
    this->ShootInterval = 0.50f;
    this->MagazineSize = 10;
    this->MaxShootCount = 3;
    this->ReloadTime = 2.00f;
    this->RandomMoveTime_Min = 2.00f;
    this->AimOffset_Height = 0.00f;
    this->UseSideDashMovement = true;
    this->UseReloadMotion = true;
    this->MeleeAttackWithGun = false;
    this->AimRotateSpeed = 90.00f;
    this->FireStateClass = NULL;
    this->SphereCastRadius = 5.00f;
}

