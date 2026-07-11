#include "PalPassivePartnerSkillItemParameter.h"

FPalPassivePartnerSkillItemParameter::FPalPassivePartnerSkillItemParameter() {
    this->ItemTypeA = EPalItemTypeA::None;
    this->ItemTypeB = EPalItemTypeB::None;
    this->bIsContainNoItemId = false;
    this->WeaponType = EPalWeaponType::None;
    this->bMeleeOnly = false;
}

