#include "PalBossBattleDifficultyParameter.h"

FPalBossBattleDifficultyParameter::FPalBossBattleDifficultyParameter() {
    this->Level = 0;
    this->HardUnlockCondition = EPalBossBattleHardUnlockCondition::DefeatHardUnlockTiggerBoss;
    this->BattleTimeLimit = 0;
    this->CapturePhaseTimeLimit = 0;
    this->bSpawnBossAtStart_InServer = false;
    this->bSpawnPalBox = false;
    this->ReadyPhaseTimeLimit = 0;
}

