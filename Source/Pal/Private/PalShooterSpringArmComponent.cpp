#include "PalShooterSpringArmComponent.h"

UPalShooterSpringArmComponent::UPalShooterSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraInterpTime = 0.10f;
    this->AimingCameraLagSpeed = 100.00f;
    this->LengthInterpCurve = NULL;
    this->OffsetInterpCurve = NULL;
    this->WalkCameraArmLength = 400.00f;
    this->HipShootCameraArmLength = 300.00f;
    this->AimCameraArmLength = 100.00f;
    this->AirCameraArmLength = 400.00f;
    this->AirHipShootCameraArmLength = 300.00f;
    this->AirAimCameraArmLength = 100.00f;
    this->FlyCameraArmLength = 400.00f;
    this->FlyHipShootCameraArmLength = 300.00f;
    this->FlyAimCameraArmLength = 100.00f;
    this->CrouchCameraArmLength = 330.00f;
    this->CrouchHipShootCameraArmLength = 300.00f;
    this->CrouchAimCameraArmLength = 100.00f;
    this->SlidingCameraArmLength = 400.00f;
    this->SlidingHipShootCameraArmLength = 300.00f;
    this->SlidingAimCameraArmLength = 100.00f;
    this->bUseWaterCameraParameter = false;
    this->WaterCameraArmLength = 400.00f;
    this->WaterHipShootCameraArmLength = 300.00f;
    this->WaterAimCameraArmLength = 100.00f;
    this->DeadCameraArmLength = 0.00f;
    this->ClimbCameraTargetOffset = 10.00f;
    this->bDefaultEnableCameraLag = false;
    this->DefaultCameraLagSpeed = 0.00f;
    this->DefaultCameraLagMaxDistance = 0.00f;
    this->ShooterComponent = NULL;
    this->MoveComponent = NULL;
    this->ParameterComponent = NULL;
    this->DamageReactionComponent = NULL;
    this->bIsSpectated = false;
    this->CameraModifier = NULL;
    this->CameraModifierWeightInterpSpeed = 2.00f;
    this->SafetyNetArmLengthInterpSpeed = 12.00f;
    this->SafetyNetSocketOffsetInterpSpeed = 10.00f;
    this->SafetyNetTargetOffsetInterpSpeed = 8.00f;
    this->SafetyNetCameraLagSpeedInterpSpeed = 12.00f;
    this->OriginalTargetArmLength = 0.00f;
    this->bEnableAttachmentLag = true;
    this->AttachmentLagSpeed = 10.00f;
    this->PreviousCapsuleHalfHeight = 0.00f;
    this->bAttachmentLagInitialized = false;
    this->bEnableAdaptiveZSmoothing = true;
    this->AdaptiveZSmoothBufferSize = 3;
    this->AdaptiveZSmoothCorrectionSpeed = 3.00f;
    this->AdaptiveZSmoothMaxOffset = 200.00f;
    this->PreviousFrameZ = 0.00f;
    this->AdaptiveZSmoothOffset = 0.00f;
    this->bAdaptiveZSmoothInitialized = false;
    this->ZDeltaBufferIndex = 0;
    this->ZDeltaBufferCount = 0;
}

void UPalShooterSpringArmComponent::UpdateCameraInterp(float DeltaTime) {
}

void UPalShooterSpringArmComponent::UnregisterAdditionalOffsets() {
}

void UPalShooterSpringArmComponent::UnregisterAdditionalOffset(const FName& flgName) {
}

void UPalShooterSpringArmComponent::SetCameraLengthScale(FName flagName, float Scale) {
}

void UPalShooterSpringArmComponent::ResetCameraInterp() {
}

void UPalShooterSpringArmComponent::ResetCameraDirection() {
}

void UPalShooterSpringArmComponent::RegisterAdditionalOffset(const FShooterSpringCameraAdditionalOffset& Offset) {
}

void UPalShooterSpringArmComponent::OnUpdatePlayerHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP) {
}

void UPalShooterSpringArmComponent::OnSwimming(bool IsInSwimming) {
}

void UPalShooterSpringArmComponent::OnStartAim() {
}

void UPalShooterSpringArmComponent::OnReleaseTrigger() {
}

void UPalShooterSpringArmComponent::OnPullTrigger() {
}

void UPalShooterSpringArmComponent::OnLanded(UPalCharacterMovementComponent* Component, const FHitResult& Hit) {
}

void UPalShooterSpringArmComponent::OnJump(UPalCharacterMovementComponent* Component) {
}

void UPalShooterSpringArmComponent::OnFly(UPalCharacterMovementComponent* Component) {
}

void UPalShooterSpringArmComponent::OnEndAim() {
}

void UPalShooterSpringArmComponent::OnDyingDeadEnd(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo) {
}

void UPalShooterSpringArmComponent::OnDead(FPalDeadInfo DeadInfo) {
}

void UPalShooterSpringArmComponent::OnCompleteInitializeParameter(APalCharacter* InCharacter) {
}

void UPalShooterSpringArmComponent::OnChangeSliding(UPalCharacterMovementComponent* Component, bool IsSliding) {
}

void UPalShooterSpringArmComponent::OnChangeShootState(bool IsAim, bool IsShooting) {
}

void UPalShooterSpringArmComponent::OnChangeGraphicsDelegate(const FPalOptionGraphicsSettings& PrevSettings, const FPalOptionGraphicsSettings& NewSettings) {
}

void UPalShooterSpringArmComponent::OnChangeCrouch(UPalCharacterMovementComponent* Component, bool isCrouch) {
}

FVector UPalShooterSpringArmComponent::GetCurrentCameraOffset() const {
    return FVector{};
}

float UPalShooterSpringArmComponent::GetCurrentCameraArmLength() const {
    return 0.0f;
}

void UPalShooterSpringArmComponent::ChangeArmParameter_forBP() {
}


