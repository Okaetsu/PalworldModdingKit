#include "PalDeathDropPalComponent.h"

UPalDeathDropPalComponent::UPalDeathDropPalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DropPalDataTable = NULL;
    this->bSkipDropIfOwnerCaptured = true;
}

void UPalDeathDropPalComponent::OnOwnerDead(FPalDeadInfo DeadInfo) {
}

void UPalDeathDropPalComponent::OnCreatedDropPal(FPalInstanceID CreatedPalInstanceID) {
}

TArray<FName> UPalDeathDropPalComponent::GetRowNames() const {
    return TArray<FName>();
}


