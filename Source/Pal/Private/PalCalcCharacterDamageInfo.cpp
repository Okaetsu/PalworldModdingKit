#include "PalCalcCharacterDamageInfo.h"

FPalCalcCharacterDamageInfo::FPalCalcCharacterDamageInfo() {
    this->OtomoRate = 1.00f;
    this->DefenderLevel = 0;
    this->DefenderDefence = 0;
    this->DefenderElementType1 = EPalElementType::None;
    this->DefenderElementType2 = EPalElementType::None;
    this->ElementStatusMultiplay = 1.00f;
}

