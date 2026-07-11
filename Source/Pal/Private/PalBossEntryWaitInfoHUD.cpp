#include "PalBossEntryWaitInfoHUD.h"

UPalBossEntryWaitInfoHUD::UPalBossEntryWaitInfoHUD() {
    this->EnableCountDown = false;
    this->BossTower = NULL;
    this->TimeLimitDate = 0.00f;
}

void UPalBossEntryWaitInfoHUD::UpdateWaitInfo(bool bIsCountDown, float TimeLimit) {
}


void UPalBossEntryWaitInfoHUD::OnCloseHUD() {
}


