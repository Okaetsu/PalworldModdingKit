#include "PalStatus_HPThresholdBase.h"
#include "Net/UnrealNetwork.h"

UPalStatus_HPThresholdBase::UPalStatus_HPThresholdBase() {
    this->TargetEffectType = EPalPassiveSkillEffectType::no;
    this->VisualEffectID = EPalVisualEffectID::None;
    this->bEffectActive = false;
}

void UPalStatus_HPThresholdBase::OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP) {
}

void UPalStatus_HPThresholdBase::OnRep_EffectActive() {
}

void UPalStatus_HPThresholdBase::BP_OnHPThresholdVfxRefreshed_Implementation() {
}

void UPalStatus_HPThresholdBase::BP_OnHPThresholdVfxOn_Implementation() {
}

void UPalStatus_HPThresholdBase::BP_OnHPThresholdVfxOff_Implementation() {
}

void UPalStatus_HPThresholdBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStatus_HPThresholdBase, bEffectActive);
}


