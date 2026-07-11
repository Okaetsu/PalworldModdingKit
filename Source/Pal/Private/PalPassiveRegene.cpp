#include "PalPassiveRegene.h"

UPalPassiveRegene::UPalPassiveRegene() {
    this->Interval = 0;
    this->RemainingTime = 0;
    this->Value = 0.00f;
    this->EffectType = EPalPassiveSkillEffectType::no;
    this->IsPartnerSkill = false;
    this->TribeId = EPalTribeID::None;
    this->IsStackablePartnerSkillBySameTribe = false;
}


