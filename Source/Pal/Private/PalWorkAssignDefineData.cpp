#include "PalWorkAssignDefineData.h"

FPalWorkAssignDefineData::FPalWorkAssignDefineData() {
    this->WorkSuitability = EPalWorkSuitability::None;
    this->WorkSuitabilityRank = 1;
    this->bPlayerWorkable = false;
    this->bBaseCampWorkerWorkable = true;
    this->WorkableSizeMin = EPalSizeType::None;
    this->WorkableSizeMax = EPalSizeType::None;
    this->WorkType = EPalWorkType::None;
    this->ActionType = EPalActionType::None;
    this->WorkerMaxNum = -1;
    this->AffectSanityValue = 0.00f;
    this->AffectFullStomachValue = 0.00f;
    this->bUseMultiWorkType = false;
}

