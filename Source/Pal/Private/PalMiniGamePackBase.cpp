#include "PalMiniGamePackBase.h"

UPalMiniGamePackBase::UPalMiniGamePackBase() {
    this->MiniGameWidgetClass = NULL;
}

UPalHUDDispatchParameterBase* UPalMiniGamePackBase::CreateDispatchParameter_Implementation(UObject* Outer) {
    return NULL;
}


