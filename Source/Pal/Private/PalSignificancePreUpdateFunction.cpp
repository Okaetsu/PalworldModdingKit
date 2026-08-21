#include "PalSignificancePreUpdateFunction.h"

FPalSignificancePreUpdateFunction::FPalSignificancePreUpdateFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

