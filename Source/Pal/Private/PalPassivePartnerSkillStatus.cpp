#include "PalPassivePartnerSkillStatus.h"

FPalPassivePartnerSkillStatus::FPalPassivePartnerSkillStatus() {
    this->State = EPalPassivePartnerSkillState::Inactive;
    this->ElapsedTime = 0.00f;
}

