#include "PalMapObjectMultiProductParameterComponent.h"

UPalMapObjectMultiProductParameterComponent::UPalMapObjectMultiProductParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MenuUIClass = NULL;
    this->SlotNum = 1;
    this->WorkSpeedAdditionalRate = 1.00f;
    this->bIsGainExp = true;
}


