#include "PalMapObjectOperationalLoadParameterComponent.h"

UPalMapObjectOperationalLoadParameterComponent::UPalMapObjectOperationalLoadParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoadAccumulationRate = 1.00f;
    this->MaxLoad = 100.00f;
    this->LoadReductionPerTick = 20.00f;
    this->WarningThresholdRatio = 80.00f;
    this->LoadReductionThresholdRatio = 80.00f;
}


