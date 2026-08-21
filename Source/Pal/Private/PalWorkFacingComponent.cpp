#include "PalWorkFacingComponent.h"

UPalWorkFacingComponent::UPalWorkFacingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReverseDirection = true;
    this->bWorkAtOrigin = false;
    this->bUseCompositeWorkType = false;
}


