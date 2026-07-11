#include "PalLevelObjectRelic.h"

APalLevelObjectRelic::APalLevelObjectRelic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RelicType = EPalRelicType::CapturePower;
}

EPalRelicType APalLevelObjectRelic::GetRelicType() const {
    return EPalRelicType::CapturePower;
}


