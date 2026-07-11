#include "PalUIMapObjectRecyclerStatusIndicatorModel.h"

UPalUIMapObjectRecyclerStatusIndicatorModel::UPalUIMapObjectRecyclerStatusIndicatorModel() {
}

void UPalUIMapObjectRecyclerStatusIndicatorModel::OnUpdateRecycleTarget(UPalMapObjectRecyclerModel* Model) {
}

void UPalUIMapObjectRecyclerStatusIndicatorModel::OnUpdateBoost(UPalMapObjectRecyclerModel* Model) {
}

bool UPalUIMapObjectRecyclerStatusIndicatorModel::IsSwitchOn() const {
    return false;
}

bool UPalUIMapObjectRecyclerStatusIndicatorModel::IsRecycleBoostBuffActive() const {
    return false;
}

bool UPalUIMapObjectRecyclerStatusIndicatorModel::IsInProgressRecycleBoost() const {
    return false;
}

bool UPalUIMapObjectRecyclerStatusIndicatorModel::IsFullOutputContainer() const {
    return false;
}

UPalMapObjectRecyclerModel* UPalUIMapObjectRecyclerStatusIndicatorModel::GetRecyclerModel() const {
    return NULL;
}

float UPalUIMapObjectRecyclerStatusIndicatorModel::GetCurrentSpeedMultiplier() const {
    return 0.0f;
}

FName UPalUIMapObjectRecyclerStatusIndicatorModel::GetCurrentRecycleItemId() const {
    return NAME_None;
}


