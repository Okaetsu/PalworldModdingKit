#include "PalWorkSlotHUDInfo.h"

FPalWorkSlotHUDInfo::FPalWorkSlotHUDInfo() {
    this->Slot = EPalBuildObjectStatusHUDSlot::DefaultSlot;
    this->RequiredWorkSuitability = EPalWorkSuitability::None;
    this->RequiredRank = 0;
}

