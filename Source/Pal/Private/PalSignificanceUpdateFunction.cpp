#include "PalSignificanceUpdateFunction.h"

FPalSignificanceUpdateFunction::FPalSignificanceUpdateFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

