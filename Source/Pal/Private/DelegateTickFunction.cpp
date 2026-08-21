#include "DelegateTickFunction.h"

FDelegateTickFunction::FDelegateTickFunction() {
    this->TickGroup = TG_PrePhysics;
    this->EndTickGroup = TG_PrePhysics;
    this->bAllowTickOnDedicatedServer = true;
}

