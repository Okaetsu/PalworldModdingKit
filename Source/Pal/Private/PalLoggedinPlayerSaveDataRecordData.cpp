#include "PalLoggedinPlayerSaveDataRecordData.h"

FPalLoggedinPlayerSaveDataRecordData::FPalLoggedinPlayerSaveDataRecordData() {
    this->BossDefeatCount = 0;
    this->PredatorDefeatCount = 0;
    this->TribeCaptureCount = 0;
    this->PalCaptureCountBonusCount_Tier1 = 0;
    this->PalCaptureCountBonusCount_Tier2 = 0;
    this->PalCaptureCountBonusCount_Tier3 = 0;
    this->PalCaptureBonusExpTableIndex = 0;
    this->NpcBonusExpTableIndex = 0;
    this->RelicPossessNum = 0;
    this->NormalDungeonClearCount = 0;
    this->FixedDungeonClearCount = 0;
    this->OilrigClearCount = 0;
    this->AreaBonusExpTableIndex = 0;
    this->CampConqueredCount = 0;
    this->FoundTreasureCount = 0;
    this->bFirstFishingComplete = false;
    this->BossDefeatExpBonusTableIndex = 0;
    this->RelicBonusExpTableIndex = 0;
    this->NoteBonusExpTableIndex = 0;
    this->ItemPIckupBonusExpTableIndex = 0;
    this->FastTravelBonusExpTableIndex = 0;
    this->bCaptureCompletionRelicFixupDone = false;
    this->MutationCount = 0;
    this->AwakeningCount = 0;
    this->bIsGameCleared = false;
    this->bFieldBossDefeatFlagResetDone = false;
}

