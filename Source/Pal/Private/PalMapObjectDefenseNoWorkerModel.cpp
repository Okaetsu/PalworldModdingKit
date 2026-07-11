#include "PalMapObjectDefenseNoWorkerModel.h"

UPalMapObjectDefenseNoWorkerModel::UPalMapObjectDefenseNoWorkerModel() {
}

bool UPalMapObjectDefenseNoWorkerModel::IsEnableRunning() const {
    return false;
}

EPalMapObjectDefenseType UPalMapObjectDefenseNoWorkerModel::GetDefenseType() const {
    return EPalMapObjectDefenseType::Wait;
}


