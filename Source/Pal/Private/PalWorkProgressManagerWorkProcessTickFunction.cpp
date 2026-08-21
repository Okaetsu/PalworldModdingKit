#include "PalWorkProgressManagerWorkProcessTickFunction.h"

FPalWorkProgressManagerWorkProcessTickFunction::FPalWorkProgressManagerWorkProcessTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
    this->Target = NULL;
}

