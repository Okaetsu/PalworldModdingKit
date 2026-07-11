#include "PalProjectileMovementComponent.h"

UPalProjectileMovementComponent::UPalProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseHomingAngleLimit = false;
    this->HomingAngleLimit = 90.00f;
    this->bIgnoreHomingAngleLimitUntilEnteringAngleReached = false;
    this->bEnablePredictHoming = false;
    this->HomingPredictStrength = 0.00f;
    this->bEnteringAngleReached = false;
    this->HomingLocationSet = false;
}

void UPalProjectileMovementComponent::SetRandomHomingOffset(const float OffsetRange, FRandomStream RandomStream) {
}

void UPalProjectileMovementComponent::SetHomingLocation(const FVector TargetLocation) {
}

bool UPalProjectileMovementComponent::HasSphereHomingRelicEffect(const AActor* OwnerPlayer) {
    return false;
}

float UPalProjectileMovementComponent::GetSphereHomingRelicEffectRate(const AActor* OwnerPlayer) {
    return 0.0f;
}

bool UPalProjectileMovementComponent::ApplySphereHomingRelicEffect(const AActor* OwnerPlayer) {
    return false;
}


