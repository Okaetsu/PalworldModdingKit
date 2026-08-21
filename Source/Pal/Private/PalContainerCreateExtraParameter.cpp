#include "PalContainerCreateExtraParameter.h"

FPalContainerCreateExtraParameter::FPalContainerCreateExtraParameter() {
    this->bIsWatchAllPlayer = false;
    this->bIsSyncEnable = true;
    this->bIgnoreOnSave = false;
    this->OperationRestrictType = EPalContainerOperationRestrictType::None;
}

