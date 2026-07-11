#include "PalSoundPlayerComponent.h"

UPalSoundPlayerComponent::UPalSoundPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponentTickPolicy = EPalAkComponentTickPolicy::UseComponentDefault;
    this->PalSoundSlotCache = NULL;
}

void UPalSoundPlayerComponent::BeginPlay() {
}


