#include "PalCharacterMovementTickFunction.h"

FPalCharacterMovementTickFunction::FPalCharacterMovementTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

