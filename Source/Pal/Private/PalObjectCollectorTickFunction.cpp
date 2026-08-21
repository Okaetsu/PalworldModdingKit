#include "PalObjectCollectorTickFunction.h"

FPalObjectCollectorTickFunction::FPalObjectCollectorTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

