#include "PalForwardPathRecoveryModule.h"

UPalForwardPathRecoveryModule::UPalForwardPathRecoveryModule() {
    this->MinSkipDistance = 300.00f;
    this->MaxSkipDistance = 1000.00f;
    this->StuckTime = 0.50f;
    this->StuckSpeedRatio = 0.30f;
    this->OwnerController = NULL;
}

void UPalForwardPathRecoveryModule::TickRecovery(float DeltaTime) {
}

void UPalForwardPathRecoveryModule::SetWarpGoalOffset(float InOffset) {
}

void UPalForwardPathRecoveryModule::SetEnabled(bool bInEnabled) {
}

void UPalForwardPathRecoveryModule::ResetGoalCache() {
}

void UPalForwardPathRecoveryModule::Initialize(APalAIController* InOwnerController) {
}


