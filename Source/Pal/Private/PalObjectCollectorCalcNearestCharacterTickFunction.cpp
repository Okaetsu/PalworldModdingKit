#include "PalObjectCollectorCalcNearestCharacterTickFunction.h"

FPalObjectCollectorCalcNearestCharacterTickFunction::FPalObjectCollectorCalcNearestCharacterTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

