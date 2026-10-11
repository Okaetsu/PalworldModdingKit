#include "PalFishingSystem.h"

UPalFishingSystem::UPalFishingSystem() {
    this->RarePalEffect = NULL;
    this->RarePassiveEffect = NULL;
    this->CatchBattleBlueprintClass = NULL;
    this->BaitItemDataTable = NULL;
    this->EnableTickRadius = 4000.00f;
    this->DisableTickAddRadius = 400.00f;
    this->QueryInterval = 0.10f;
    this->RodRequiredDisplayDistance = 3000.00f;
    this->RodRequiredWorldHUDDisplayRange = 5000.00f;
    this->DifficultyUIDataTable = NULL;
    this->FishingDifficultyRateMin = 0.10f;
    this->FishingDifficultyRateMax = 1.00f;
    this->CatchBattleDifficultyMinValue = 15.00f;
    this->PalSkillAdviceTime = 30.00f;
}



float UPalFishingSystem::GetFishShadowSizeScale(EPalFishShadowSizeType SizeType) const {
    return 0.0f;
}

EPalFishingPlayerMotionType UPalFishingSystem::GetFishingPlayerMotionType(const EPalSizeType SizeType) {
    return EPalFishingPlayerMotionType::None;
}

UPalFishingCatchBattle* UPalFishingSystem::GetCatchBattle(const FGuid& PlayerUId) const {
    return NULL;
}


