#include "PalGimmickDamageReactionComponent.h"
#include "Net/UnrealNetwork.h"

UPalGimmickDamageReactionComponent::UPalGimmickDamageReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxHP = 100.00f;
    this->Hp = 100.00f;
    this->bAcceptDamage = true;
}

void UPalGimmickDamageReactionComponent::SetHP(float NewHP, bool bClearThresholdHistory) {
}

void UPalGimmickDamageReactionComponent::SetAcceptDamage(bool bEnable) {
}

void UPalGimmickDamageReactionComponent::Server_ProcessDamage_Implementation(const FPalDamageInfo& Info) {
}

void UPalGimmickDamageReactionComponent::ResetState(bool bResetHP, bool bClearThresholdHistory) {
}

void UPalGimmickDamageReactionComponent::ResetHPToMax(bool bClearThresholdHistory) {
}

bool UPalGimmickDamageReactionComponent::IsDepleted() const {
    return false;
}

int32 UPalGimmickDamageReactionComponent::CalcDamageValue_Implementation(const FPalDamageInfo& DamageInfo) const {
    return 0;
}

void UPalGimmickDamageReactionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGimmickDamageReactionComponent, MaxHP);
    DOREPLIFETIME(UPalGimmickDamageReactionComponent, Hp);
    DOREPLIFETIME(UPalGimmickDamageReactionComponent, bAcceptDamage);
    DOREPLIFETIME(UPalGimmickDamageReactionComponent, TriggeredThresholdNames);
}


