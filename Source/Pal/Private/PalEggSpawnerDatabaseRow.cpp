#include "PalEggSpawnerDatabaseRow.h"

FPalEggSpawnerDatabaseRow::FPalEggSpawnerDatabaseRow() {
    this->RespawnTimeMinutesObtained = 300.00f;
    this->bRespawnableMulti = true;
    this->bIsWorldTreePalEgg = false;
    this->WorldTreePalEggProbability = 0;
    this->ProbabilityRespawn = 100;
    this->LotteryCoolTimeMinutes = 180.00f;
    this->bAdjustMapObjectToFloor = false;
}

