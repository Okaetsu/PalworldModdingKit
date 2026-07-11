#include "PalLevelObjectActor.h"

APalLevelObjectActor::APalLevelObjectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableLevelObjectImportanceByDistance = false;
}

FGuid APalLevelObjectActor::GetLevelObjectInstanceId() const {
    return FGuid{};
}


