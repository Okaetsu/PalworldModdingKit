#include "PalUIMapObjectBreedStatusIndicatorModel.h"

UPalUIMapObjectBreedStatusIndicatorModel::UPalUIMapObjectBreedStatusIndicatorModel() {
}

void UPalUIMapObjectBreedStatusIndicatorModel::OnBreedProgressChanged(float CurrentProgress, float MaxProgress) {
}

bool UPalUIMapObjectBreedStatusIndicatorModel::HasConsumableBreedItem() const {
    return false;
}

UPalMapObjectConcreteModelBase* UPalUIMapObjectBreedStatusIndicatorModel::GetConcreteModel() const {
    return NULL;
}

EPalBreedStoppedReason UPalUIMapObjectBreedStatusIndicatorModel::GetBreedStoppedReason() const {
    return EPalBreedStoppedReason::None;
}

void UPalUIMapObjectBreedStatusIndicatorModel::GetBreedProgress(float& OutCurrentProgress, float& OutMaxProgress) const {
}


