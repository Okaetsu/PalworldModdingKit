#include "PalStatus_RecoverHPOnHPThreshold.h"
#include "Net/UnrealNetwork.h"

UPalStatus_RecoverHPOnHPThreshold::UPalStatus_RecoverHPOnHPThreshold() {
    this->VisualEffectID = EPalVisualEffectID::None;
    this->CooldownDuration = 60.00f;
    this->bOnCooldown = false;
    this->CooldownRemaining = 0.00f;
    this->LastRawDamage = 0;
    this->LastPrevHP = 0;
}

void UPalStatus_RecoverHPOnHPThreshold::OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP) {
}

void UPalStatus_RecoverHPOnHPThreshold::OnRawDamageHP(int32 RawDamage, int32 PrevHP) {
}

void UPalStatus_RecoverHPOnHPThreshold::BP_OnRecoverHPVfxTrigger_Implementation() {
}

void UPalStatus_RecoverHPOnHPThreshold::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStatus_RecoverHPOnHPThreshold, bOnCooldown);
}


