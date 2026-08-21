#include "PalCharacterAsyncTickFunction.h"

FPalCharacterAsyncTickFunction::FPalCharacterAsyncTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

