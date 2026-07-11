#include "PalWorkAssignEntry.h"

FPalWorkAssignEntry::FPalWorkAssignEntry() {
    this->WorkSuitability = EPalWorkSuitability::None;
    this->WorkType = EPalWorkType::None;
    this->WorkActionType = EPalActionType::None;
    this->MaxAssignNum = 0;
    this->RequiredRank = 0;
}

