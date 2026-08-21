#include "PalItemLotteryData.h"

FPalItemLotteryData::FPalItemLotteryData() {
    this->SlotNo = 1;
    this->WeightInSlot = 0.00f;
    this->MinNum = 1;
    this->MaxNum = 1;
    this->NumUnit = 1;
    this->TreasureBoxGrade = EPalMapObjectTreasureGradeType::Grade1;
    this->BonusExpRate = 0.00f;
}

