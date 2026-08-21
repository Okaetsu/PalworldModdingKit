#include "PalSignificancePostUpdateFunction.h"

FPalSignificancePostUpdateFunction::FPalSignificancePostUpdateFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

