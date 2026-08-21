#include "PalMapObjectManageTickPostProcessFunction.h"

FPalMapObjectManageTickPostProcessFunction::FPalMapObjectManageTickPostProcessFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

