#include "ActionDynamicParameter.h"

FActionDynamicParameter::FActionDynamicParameter() {
    this->ActionTarget = NULL;
    this->GeneralPurposeIndex = 0;
    this->bIsAdjustTransform = false;
    this->bIsInRaidArea = false;
    this->NetRandSeed = 877;
    this->IsReflectedForClient = false;
}

