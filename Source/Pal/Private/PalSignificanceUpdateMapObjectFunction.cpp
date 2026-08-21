#include "PalSignificanceUpdateMapObjectFunction.h"

FPalSignificanceUpdateMapObjectFunction::FPalSignificanceUpdateMapObjectFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

