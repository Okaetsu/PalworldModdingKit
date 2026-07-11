#include "PalFogParameterBlendConfig.h"

FPalFogParameterBlendConfig::FPalFogParameterBlendConfig() {
    this->BlendMode = EPalFogBlendMode::WeightedAverage;
    this->BlendStrength = 0.00f;
    this->bUseExponentialBlend = false;
}

