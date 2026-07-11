#include "PalUIMapObjectClinicStatusIndicatorModel.h"

UPalUIMapObjectClinicStatusIndicatorModel::UPalUIMapObjectClinicStatusIndicatorModel() {
}

void UPalUIMapObjectClinicStatusIndicatorModel::OnClinicValuesChanged(UPalMapObjectClinicModel* Model) {
}

bool UPalUIMapObjectClinicStatusIndicatorModel::IsStarLevelCapped() const {
    return false;
}

bool UPalUIMapObjectClinicStatusIndicatorModel::IsAssigned() const {
    return false;
}

EPalWorkSuitability UPalUIMapObjectClinicStatusIndicatorModel::GetRequiredWorkSuitability() const {
    return EPalWorkSuitability::None;
}

int32 UPalUIMapObjectClinicStatusIndicatorModel::GetRequiredRank() const {
    return 0;
}

int32 UPalUIMapObjectClinicStatusIndicatorModel::GetRawHygieneStarLevel() const {
    return 0;
}

int32 UPalUIMapObjectClinicStatusIndicatorModel::GetMaxHygieneStarLevel() const {
    return 0;
}

float UPalUIMapObjectClinicStatusIndicatorModel::GetCurrentSicknessSuppressionRate() const {
    return 0.0f;
}

float UPalUIMapObjectClinicStatusIndicatorModel::GetCurrentSanitySuppressionRate() const {
    return 0.0f;
}

int32 UPalUIMapObjectClinicStatusIndicatorModel::GetCurrentHygieneStarLevel() const {
    return 0;
}

FPalInstanceID UPalUIMapObjectClinicStatusIndicatorModel::GetAssignedPalIndividualId() const {
    return FPalInstanceID{};
}


