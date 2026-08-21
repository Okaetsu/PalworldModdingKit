#include "PalMapObjectAssignData.h"

FPalMapObjectAssignData::FPalMapObjectAssignData() {
    this->GenusCategory = EPalGenusCategoryType::None;
    this->ElementType = EPalElementType::None;
    this->WorkSuitability = EPalWorkSuitability::None;
    this->WorkSuitabilityRank = 1;
    this->bPlayerWorkable = false;
    this->bBaseCampWorkerWorkable = true;
    this->WorkableSizeMin = EPalSizeType::None;
    this->WorkableSizeMax = EPalSizeType::None;
    this->WorkType = EPalWorkType::None;
    this->WorkActionType = EPalActionType::None;
    this->WorkerMaxNum = 0;
    this->AffectSanityValue = 0.00f;
    this->AffectFullStomachValue = 0.00f;
    this->MultiWorkSuitability1 = EPalWorkSuitability::None;
    this->MultiWorkType1 = EPalWorkType::None;
    this->MultiWorkActionType1 = EPalActionType::None;
    this->MultiRequiredRank1 = 1;
    this->MultiWorkSuitability2 = EPalWorkSuitability::None;
    this->MultiWorkType2 = EPalWorkType::None;
    this->MultiWorkActionType2 = EPalActionType::None;
    this->MultiRequiredRank2 = 1;
}

