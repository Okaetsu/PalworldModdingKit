#include "PalLevelGimmick_AreaBarrier_Info.h"

APalLevelGimmick_AreaBarrier_Info::APalLevelGimmick_AreaBarrier_Info(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APalLevelGimmick_AreaBarrier_Info::RemoveActiveVolumeId(const FGuid& InVolumeId) {
}

bool APalLevelGimmick_AreaBarrier_Info::IsVolumeActive(const FGuid& InVolumeId) const {
    return false;
}

void APalLevelGimmick_AreaBarrier_Info::AddActiveVolumeId(const FGuid& InVolumeId) {
}


