#include "PalFogParameterBlendConfig.h"

FPalFogParameterBlendConfig::FPalFogParameterBlendConfig() {
    this->BlendMode = EPalFogBlendMode::WeightedAverage;
    this->BlendStrength = 1.00f;
    this->bUseExponentialBlend = false;
}

