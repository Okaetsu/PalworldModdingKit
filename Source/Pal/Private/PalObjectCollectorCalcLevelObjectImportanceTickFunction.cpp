#include "PalObjectCollectorCalcLevelObjectImportanceTickFunction.h"

FPalObjectCollectorCalcLevelObjectImportanceTickFunction::FPalObjectCollectorCalcLevelObjectImportanceTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

