#include "PalWildlifeSanctuarySplineComponent.h"

UPalWildlifeSanctuarySplineComponent::UPalWildlifeSanctuarySplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FVector UPalWildlifeSanctuarySplineComponent::GetWorldLocationAtProgressTime(float ProgressTime) const {
    return FVector{};
}

float UPalWildlifeSanctuarySplineComponent::GetSplineProgressAtWorldLocation(const FVector& WorldLocation) {
    return 0.0f;
}


