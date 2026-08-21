#include "PalEnemyCampStatus.h"

FPalEnemyCampStatus::FPalEnemyCampStatus() {
    this->bIsSpawned = false;
    this->bIsEnemyAllDead = false;
    this->bIsClear = false;
    this->bRewardReceived = false;
    this->RewardPalLevel = 0;
    this->ElapsedTime = -1.00f;
    this->CampPresetIndex = -1;
}

