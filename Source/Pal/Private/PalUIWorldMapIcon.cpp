#include "PalUIWorldMapIcon.h"

UPalUIWorldMapIcon::UPalUIWorldMapIcon() {
}

void UPalUIWorldMapIcon::SetLocationData(UPalLocationBase* InLocation) {
}

void UPalUIWorldMapIcon::SetHideFlag(const FName& flagName, bool bNewHideFlag) {
}


bool UPalUIWorldMapIcon::IsActiveAnyHideFlag() const {
    return false;
}

UPalLocationPoint* UPalUIWorldMapIcon::GetLocationPoint() const {
    return NULL;
}

bool UPalUIWorldMapIcon::GetLocationOnLandscape_Implementation(FVector& OutLocation) const {
    return false;
}

UPalLocationBase* UPalUIWorldMapIcon::GetLocationBase() const {
    return NULL;
}


