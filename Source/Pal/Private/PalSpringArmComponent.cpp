#include "PalSpringArmComponent.h"

UPalSpringArmComponent::UPalSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterProbeChannel = ECC_MAX;
    this->PushDownOffsetOnSweepUpHit = 30;
    this->MaxZOffsetAboveWaterSurface = 200.00f;
    this->MaxEmergencyZOffset = 10000.00f;
    this->WaterSurfaceZOffsetInterpSpeed = 12.00f;
    this->CurrentWaterSurfaceZOffset = 0.00f;
    this->DesiredWaterSurfaceZOffset = 0.00f;
    this->WaterSurfaceZOffsetDeltaTime = 0.00f;
    this->CurrentDistanceFromWaterPlane = 0.00f;
}


