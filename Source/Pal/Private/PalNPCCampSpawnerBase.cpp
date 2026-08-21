#include "PalNPCCampSpawnerBase.h"

APalNPCCampSpawnerBase::APalNPCCampSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool APalNPCCampSpawnerBase::IsAllowedEnemyCampSpawnNearBaseCamp() const {
    return false;
}


float APalNPCCampSpawnerBase::CalcRemainRespawnTime(const FPalEnemyCampStatus& CampStatus) const {
    return 0.0f;
}

float APalNPCCampSpawnerBase::CalcRemainDespawnTime(const FPalEnemyCampStatus& CampStatus) const {
    return 0.0f;
}


