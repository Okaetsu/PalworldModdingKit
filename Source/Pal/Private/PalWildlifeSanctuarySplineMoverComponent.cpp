#include "PalWildlifeSanctuarySplineMoverComponent.h"

UPalWildlifeSanctuarySplineMoverComponent::UPalWildlifeSanctuarySplineMoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spline = NULL;
    this->LookAheadDist = 300.00f;
    this->UpdateInterval = 0.10f;
    this->EventTriggerDistance = 50.00f;
    this->CurrentEvent = NULL;
}

void UPalWildlifeSanctuarySplineMoverComponent::Setup(UPalWildlifeSanctuarySplineComponent* InSpline) {
}

void UPalWildlifeSanctuarySplineMoverComponent::SetMoveEnabled(bool bEnabled) {
}


