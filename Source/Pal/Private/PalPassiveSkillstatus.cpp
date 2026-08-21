#include "PalPassiveSkillstatus.h"

FPalPassiveSkillstatus::FPalPassiveSkillstatus() {
    this->State = EPalPassiveSkillState::Inactive;
    this->ElapsedTime = 0.00f;
    this->TriggerType = EPalPassiveTriggerType::None;
}

