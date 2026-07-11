#include "PalNPC.h"

APalNPC::APalNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponGenerator = NULL;
    this->IsEnableJumpEffect = true;
    this->DefaultVoiceID = -1;
    this->bIsScarecrow = false;
}

void APalNPC::RemoveEnemyFromBattleManager(FPalDeadInfo DeadInfo) {
}

void APalNPC::OnPostSpawned() {
}

void APalNPC::OnCompletedInitParam(APalCharacter* InCharacter) {
}

void APalNPC::MasterWazaUpdateWhenLevelUp(int32 addLevel, int32 nowLevel) {
}

void APalNPC::MasterWazaSetup(APalCharacter* InCharacter) {
}


