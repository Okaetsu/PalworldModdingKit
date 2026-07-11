#include "PalAction_JumpFromJumpSpot.h"

UPalAction_JumpFromJumpSpot::UPalAction_JumpFromJumpSpot() {
    this->PlayerCameraModifierClass = NULL;
    this->PlayerJumpPrepareMontage = NULL;
    this->PlayerLaunchMontageNotifyName = TEXT("Launch");
    this->MonsterCameraModifierClass = NULL;
    this->MonsterJumpPrepareAnimType = EPalGeneralAnimSequenceType::None;
    this->MonsterJumpPrepareAnimPlayRate = 1.00f;
    this->MonsterLaunchDelayTime = 0.50f;
}

void UPalAction_JumpFromJumpSpot::WriteDataToBlackboard(FPalNetArchive& BlackboardRef, bool bShouldPlayJumpPrepareMontage, const FVector& LaunchVelocity) {
}

void UPalAction_JumpFromJumpSpot::EventOnMovementModeChanged(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> prevMode, TEnumAsByte<EMovementMode> newMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode) {
}

void UPalAction_JumpFromJumpSpot::EventOnMontageNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void UPalAction_JumpFromJumpSpot::EventOnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}


