#include "PalActionMovementMode_JetpackGlider.h"
#include "EPalActionMovementBaseType.h"
#include "EPalCharacterMovementCustomMode.h"

UPalActionMovementMode_JetpackGlider::UPalActionMovementMode_JetpackGlider() {
    this->MovementMode = EPalCharacterMovementCustomMode::JetpackGlider;
    this->MovementBaseType = EPalActionMovementBaseType::Flying;
    this->bApplyFinishVelocityOnEndAction = true;
    this->CollisionCheckDistance = 120.00f;
    this->CollisionCapsuleRadiusScale = 0.90f;
    this->CollisionCapsuleHalfHeightScale = 0.80f;
    this->bEnableMeshPitch = true;
    this->MeshPitchInterpSpeed = 5.00f;
}


