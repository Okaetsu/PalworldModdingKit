#include "PalOptimizeParameter.h"

FPalOptimizeParameter::FPalOptimizeParameter() {
    this->FoliageISMDistance_Meters = 1000;
    this->TargetFPS = 60.00f;
    this->MinFPS = 60.00f;
    this->MaxFPS = 60.00f;
    this->CharacterImportance_CheckNumberPerFrame = 100;
    this->CharacterImportance_NearestCount = 3;
    this->CharacterImportance_NearDistance = 5000.00f;
    this->CharacterImportance_FarDistance = 20000.00f;
    this->CharacterImportance_FarthestDistance = 30000.00f;
    this->DeadBodyDespawn_SightRange = 10000.00f;
    this->DeadBodyDespawn_UpdateIntervalSeconds = 1.00f;
    this->SpawnerImportance_NearDistance = 5000.00f;
    this->SpawnerImportance_FarDistance = 20000.00f;
}

