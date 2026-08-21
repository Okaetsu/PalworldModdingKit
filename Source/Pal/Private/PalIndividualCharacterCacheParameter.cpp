#include "PalIndividualCharacterCacheParameter.h"

FPalIndividualCharacterCacheParameter::FPalIndividualCharacterCacheParameter() {
    this->bSleeping = false;
    this->bContinueSleepingUntilFullRecovery = false;
    this->bResurrectingOnBed = false;
    this->InvaderType = EPalInvaderType::None;
    this->bIsInArena = false;
    this->ArenaDamageRate = 1.00f;
    this->OverrideLevel = -1;
    this->GroupType = EPalGroupType::Undefined;
}

