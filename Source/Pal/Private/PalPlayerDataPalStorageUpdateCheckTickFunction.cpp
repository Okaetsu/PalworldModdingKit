#include "PalPlayerDataPalStorageUpdateCheckTickFunction.h"

FPalPlayerDataPalStorageUpdateCheckTickFunction::FPalPlayerDataPalStorageUpdateCheckTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

