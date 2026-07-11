#include "PalDimensionalDistortionMovementComponent.h"

UPalDimensionalDistortionMovementComponent::UPalDimensionalDistortionMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveSpeed = 300.00f;
    this->InterpSpeed = 5.00f;
    this->ArrivalThreshold = 50.00f;
    this->bIsMoving = false;
}

void UPalDimensionalDistortionMovementComponent::StopMovement() {
}

void UPalDimensionalDistortionMovementComponent::SetTargetLocation(const FVector& InTargetLocation) {
}

void UPalDimensionalDistortionMovementComponent::SetMovementSpeed(float InSpeed) {
}

void UPalDimensionalDistortionMovementComponent::SetInterpSpeed(float InInterpSpeed) {
}

bool UPalDimensionalDistortionMovementComponent::IsMoving() const {
    return false;
}

bool UPalDimensionalDistortionMovementComponent::HasReachedTarget() const {
    return false;
}

FVector UPalDimensionalDistortionMovementComponent::GetTargetLocation() const {
    return FVector{};
}


