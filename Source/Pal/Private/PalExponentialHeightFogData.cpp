#include "PalExponentialHeightFogData.h"

FPalExponentialHeightFogData::FPalExponentialHeightFogData() {
    this->FogDensity = 0.02f;
    this->FogHeightFalloff = 0.20f;
    this->FogMaxOpacity = 1.00f;
    this->StartDistance = 0.00f;
    this->FogCutoffDistance = 0.00f;
    this->bEnableVolumetricFog = true;
    this->VolumetricFogScatteringDistribution = 0.20f;
    this->VolumetricFogExtinctionScale = 1.00f;
}

