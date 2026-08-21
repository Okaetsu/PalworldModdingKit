#include "PalFoliagePresetData.h"

FPalFoliagePresetData::FPalFoliagePresetData() {
    this->Hp = 1000;
    this->bNotDropItemIfDamagedOverMaxHp = true;
    this->DropItemNum = 0;
    this->DropEXP = 5;
    this->DestroyFXType = EPalMapObjectDestroyFXType::Normal;
    this->DestroyFXLocationRateByStaticMesh = 0.00f;
    this->DistanceFromPlayerNotRespawn = 500.00f;
    this->RespawnIntervalRealMinutes = 10;
    this->RetryRespawnIntervalRealMinutes = 1;
    this->AutoDecayProximityDistance = 0.00f;
}

