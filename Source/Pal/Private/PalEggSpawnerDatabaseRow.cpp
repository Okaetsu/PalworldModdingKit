#include "PalEggSpawnerDatabaseRow.h"

FPalEggSpawnerDatabaseRow::FPalEggSpawnerDatabaseRow() {
    this->RespawnTimeMinutesObtained = 0.00f;
    this->bRespawnableMulti = false;
    this->bIsWorldTreePalEgg = false;
    this->WorldTreePalEggProbability = 0;
    this->ProbabilityRespawn = 0;
    this->LotteryCoolTimeMinutes = 0.00f;
    this->bAdjustMapObjectToFloor = false;
}

