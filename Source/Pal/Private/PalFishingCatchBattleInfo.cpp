#include "PalFishingCatchBattleInfo.h"

FPalFishingCatchBattleInfo::FPalFishingCatchBattleInfo() {
    this->BehaviorType = EPalFishBattleBehaviorType::Normal;
    this->Difficulty = 0.00f;
    this->HitBarSizeRate = 1.00f;
    this->SuccessFightAmountRate = 1.00f;
    this->MissFightAmountRate = 1.00f;
    this->StartProgressAmountPercent = 1.00f;
    this->InitFishPos = 0.00f;
    this->bIsFirstFishing = false;
}

