#include "PalAttackFilter.h"

UPalAttackFilter::UPalAttackFilter() {
    this->Waza = EPalWazaID::None;
    this->VelocityOwner = EPalBlowVelocityOwner::HitComponent;
    this->WazaPowerRate = 1.00f;
    this->bUseSharedFilter = false;
    this->OverrideElementType = EPalElementType::None;
    this->OverrideAdditionalEffectType1 = EPalAdditionalEffectType::None;
    this->OverrideAdditionalEffectType2 = EPalAdditionalEffectType::None;
    this->bCannotKill = false;
    this->Attacker = NULL;
    this->SharedFilter = NULL;
    this->IsSharedFilter = false;
}

void UPalAttackFilter::OverrideOwnerActionId(const FGuid& ActionID) {
}

FGuid UPalAttackFilter::GetOwnerActionId() const {
    return FGuid{};
}

AActor* UPalAttackFilter::GetAttacker() const {
    return NULL;
}

void UPalAttackFilter::CallBackOnAttackDelegate(AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, UPrimitiveComponent* AttackerComponent) {
}


