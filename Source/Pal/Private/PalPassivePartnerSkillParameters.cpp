#include "PalPassivePartnerSkillParameters.h"

FPalPassivePartnerSkillParameters::FPalPassivePartnerSkillParameters() {
    this->DelayTime = 0.00f;
    this->WorkType = EPalWorkType::None;
    this->bAssignPassiveIgnoreCurrentWorkType = false;
    this->AssignOthers = false;
    this->TargetElementType = EPalElementType::None;
    this->bNotAssignSelf = false;
    this->FloatValue1 = 0.00f;
}

