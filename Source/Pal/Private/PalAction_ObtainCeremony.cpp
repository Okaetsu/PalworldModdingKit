#include "PalAction_ObtainCeremony.h"

UPalAction_ObtainCeremony::UPalAction_ObtainCeremony() {
    this->bIsChangeWorkAnimPlayRate = false;
    this->bIsChangeWalkableFloorAngle = false;
    this->TimeScaleCurve = NULL;
    this->FXTimeScaleCurve = NULL;
    this->CeremonyMontage = NULL;
    this->MontagePlayRate = 1.00f;
    this->ObtainTriggerRealTime = -1.00f;
    this->RidingObtainTriggerRealTime = 0.00f;
    this->PlayObtainFXRealTime = -1.00f;
    this->PlayObtainCompleteFXRealTime = -1.00f;
    this->SpawnedObtainCompleteFXComponent = NULL;
}

void UPalAction_ObtainCeremony::OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void UPalAction_ObtainCeremony::OnDamaged(FPalDamageResult DamageResult) {
}


