#include "PalStatus_StackBuffBase.h"
#include "Net/UnrealNetwork.h"

UPalStatus_StackBuffBase::UPalStatus_StackBuffBase() {
    this->TargetEffectType = EPalPassiveSkillEffectType::no;
    this->VisualEffectID = EPalVisualEffectID::None;
    this->MaxStack = 30;
    this->DecayPerTick = 3;
    this->ResetTimeSeconds = 5.00f;
    this->DecayIntervalSeconds = 1.00f;
    this->bInstantClearOnExpiry = false;
    this->StackCount = 0;
    this->RemainingTime = 0.00f;
    this->DecayTimer = 0.00f;
    this->bDecaying = false;
    this->bEffectActive = false;
    this->OneStackBuffRate = 0.00f;
}

void UPalStatus_StackBuffBase::OnRep_StackCount_Implementation() {
}

void UPalStatus_StackBuffBase::OnRep_RemainingTime_Implementation() {
}

void UPalStatus_StackBuffBase::OnPlayerRideHandler(AActor* RideActor) {
}

void UPalStatus_StackBuffBase::OnPlayerGetOffHandler(AActor* RideActor) {
}

void UPalStatus_StackBuffBase::OnOtomoActiveChangedHandler(APalCharacter* Otomo, bool IsActive) {
}

void UPalStatus_StackBuffBase::BP_OnStackChanged_Implementation(int32 NewStackCount) {
}

void UPalStatus_StackBuffBase::BP_OnStackBuffDeactivated_Implementation() {
}

void UPalStatus_StackBuffBase::BP_OnStackBuffActivated_Implementation() {
}

void UPalStatus_StackBuffBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStatus_StackBuffBase, StackCount);
    DOREPLIFETIME(UPalStatus_StackBuffBase, RemainingTime);
}


