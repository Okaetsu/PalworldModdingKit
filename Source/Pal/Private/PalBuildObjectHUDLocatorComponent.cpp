#include "PalBuildObjectHUDLocatorComponent.h"

UPalBuildObjectHUDLocatorComponent::UPalBuildObjectHUDLocatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HUDSlot = EPalBuildObjectStatusHUDSlot::Slot1;
    this->DisplayRange = 0.00f;
}


