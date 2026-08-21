#include "PalBossBattleDifficultyParameter.h"

FPalBossBattleDifficultyParameter::FPalBossBattleDifficultyParameter() {
    this->Level = 1;
    this->HardUnlockCondition = EPalBossBattleHardUnlockCondition::DefeatHardUnlockTiggerBoss;
    this->BattleTimeLimit = 600;
    this->CapturePhaseTimeLimit = 60;
    this->bSpawnBossAtStart_InServer = true;
    this->bSpawnPalBox = false;
    this->ReadyPhaseTimeLimit = 180;
}

