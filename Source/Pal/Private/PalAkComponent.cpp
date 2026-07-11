#include "PalAkComponent.h"

UPalAkComponent::UPalAkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseReverbVolumes = false;
    this->PersistAcrossLevelTransition = false;
}


