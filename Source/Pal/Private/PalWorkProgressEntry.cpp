#include "PalWorkProgressEntry.h"

FPalWorkProgressEntry::FPalWorkProgressEntry() {
    this->WorkSuitability = EPalWorkSuitability::None;
    this->CurrentProgress = 0.00f;
    this->MaxProgress = 0.00f;
    this->MaxStorableProgress = 0.00f;
}

