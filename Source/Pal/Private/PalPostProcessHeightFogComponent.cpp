#include "PalPostProcessHeightFogComponent.h"

UPalPostProcessHeightFogComponent::UPalPostProcessHeightFogComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableVolumetricFog = true;
    this->bGlobalVolume = false;
    this->BlendRadius = 1000.00f;
    this->BlendExponent = 1.00f;
    this->Priority = 0;
}

bool UPalPostProcessHeightFogComponent::IsGlobalVolume() const {
    return false;
}

float UPalPostProcessHeightFogComponent::ComputeWeight(const FVector& CameraLocation) const {
    return 0.0f;
}


