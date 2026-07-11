#include "PalWorkSlotHUDInfoUIModel.h"

UPalWorkSlotHUDInfoUIModel::UPalWorkSlotHUDInfoUIModel() {
}

void UPalWorkSlotHUDInfoUIModel::SetWorkSlotInfo(const FPalWorkSlotHUDInfo& InInfo) {
}

FPalWorkSlotHUDInfo UPalWorkSlotHUDInfoUIModel::GetWorkSlotInfo() const {
    return FPalWorkSlotHUDInfo{};
}

EPalBuildObjectStatusHUDSlot UPalWorkSlotHUDInfoUIModel::GetSlot() const {
    return EPalBuildObjectStatusHUDSlot::DefaultSlot;
}

EPalWorkSuitability UPalWorkSlotHUDInfoUIModel::GetRequiredWorkSuitability() const {
    return EPalWorkSuitability::None;
}

int32 UPalWorkSlotHUDInfoUIModel::GetRequiredRank() const {
    return 0;
}


