#include "PalObjectCollectorCalcNearSpawnerBaseTickFunction.h"

FPalObjectCollectorCalcNearSpawnerBaseTickFunction::FPalObjectCollectorCalcNearSpawnerBaseTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

