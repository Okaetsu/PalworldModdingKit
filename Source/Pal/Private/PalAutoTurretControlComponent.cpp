#include "PalAutoTurretControlComponent.h"

UPalAutoTurretControlComponent::UPalAutoTurretControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoTurretModel = NULL;
    this->CurrentState = EPalAutoTurretState::Inactive;
    this->bTriggering = false;
    this->bInitialized = false;
    this->SearchInterval = 0.50f;
    this->ActiveTickInterval = 0.10f;
}

void UPalAutoTurretControlComponent::OnFirstAppearEnemy() {
}

void UPalAutoTurretControlComponent::OnEmptyEnemy() {
}


