#include "PalExponentialHeightFogData.h"

FPalExponentialHeightFogData::FPalExponentialHeightFogData() {
    this->FogDensity = 0.00f;
    this->FogHeightFalloff = 0.00f;
    this->FogMaxOpacity = 0.00f;
    this->StartDistance = 0.00f;
    this->FogCutoffDistance = 0.00f;
    this->bEnableVolumetricFog = false;
    this->VolumetricFogScatteringDistribution = 0.00f;
    this->VolumetricFogExtinctionScale = 0.00f;
}

