#include "PalMonsterControllerBaseCampHungryParameter.h"

FPalMonsterControllerBaseCampHungryParameter::FPalMonsterControllerBaseCampHungryParameter() {
    this->RecoverSatietyTo = -1.00f;
    this->RecoverSanityTo = -1.00f;
    this->EatMaxNum = -1;
    this->RecoverStatusType = EPalBaseCampRecoverStatusType::Hungry;
}

