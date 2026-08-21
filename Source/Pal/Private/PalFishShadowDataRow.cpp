#include "PalFishShadowDataRow.h"

FPalFishShadowDataRow::FPalFishShadowDataRow() {
    this->FishShadowSize = EPalFishShadowSizeType::None;
    this->MoveSpeedPerSec = 100.00f;
    this->SearchRadius = 300.00f;
    this->SearchProbability = 20.00f;
    this->KingPassiveRate = 0.00f;
    this->BossPassiveRate = 0.00f;
    this->RarePassiveRate = 0.00f;
    this->BehaviorType = EPalFishBattleBehaviorType::Normal;
}

