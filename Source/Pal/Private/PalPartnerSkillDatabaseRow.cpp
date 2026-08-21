#include "PalPartnerSkillDatabaseRow.h"

FPalPartnerSkillDatabaseRow::FPalPartnerSkillDatabaseRow() {
    this->EffectTime = 0.00f;
    this->CoolDownTime = 0.00f;
    this->ExecCost = 0.00f;
    this->IdleCost = 0.00f;
    this->CanThrowPal = true;
    this->CanChangeWeapon = true;
    this->IsToggleKey = false;
    this->TriggerType = EPalPartnerSkillTriggerType::None;
}

