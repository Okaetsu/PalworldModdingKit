#include "PalMapObjectWeakPointModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectWeakPointModule::UPalMapObjectWeakPointModule() {
    this->HitAngleThreshold = 60.00f;
    this->bEnabled = false;
    this->MaxNonRegularDamage = 10;
}

void UPalMapObjectWeakPointModule::OnRep_WeakPointDirection() {
}

bool UPalMapObjectWeakPointModule::IsRegularDamage(const FPalDamageInfo& DamageInfo) const {
    return false;
}

bool UPalMapObjectWeakPointModule::IsEnabled() const {
    return false;
}

FVector UPalMapObjectWeakPointModule::GetWeakPointDirection() const {
    return FVector{};
}

int32 UPalMapObjectWeakPointModule::GetMaxNonRegularDamage() const {
    return 0;
}

float UPalMapObjectWeakPointModule::GetHitAngleThreshold() const {
    return 0.0f;
}

void UPalMapObjectWeakPointModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectWeakPointModule, WeakPointDirection);
    DOREPLIFETIME(UPalMapObjectWeakPointModule, HitAngleThreshold);
    DOREPLIFETIME(UPalMapObjectWeakPointModule, bEnabled);
    DOREPLIFETIME(UPalMapObjectWeakPointModule, AllowAttackTypeList);
    DOREPLIFETIME(UPalMapObjectWeakPointModule, MaxNonRegularDamage);
}


