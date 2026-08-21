#include "PalMapObjectManageAsyncTickFunction.h"

FPalMapObjectManageAsyncTickFunction::FPalMapObjectManageAsyncTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

