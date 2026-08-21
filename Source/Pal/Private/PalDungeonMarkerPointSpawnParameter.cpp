#include "PalDungeonMarkerPointSpawnParameter.h"

FPalDungeonMarkerPointSpawnParameter::FPalDungeonMarkerPointSpawnParameter() {
    this->RespawnInterval = 60.00f;
    this->DisappearInterval = 300.00f;
    this->RespawnProbability = 50.00f;
    this->DisappearIntervalAfterDefeatBoss = 10.00f;
}

