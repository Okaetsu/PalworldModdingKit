#include "PalMapObjectModelEffect_OverHeat.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelEffect_OverHeat::UPalMapObjectModelEffect_OverHeat() {
    this->bOverHeated = false;
}

void UPalMapObjectModelEffect_OverHeat::OnRep_OverHeated(bool bLastValue) {
}

void UPalMapObjectModelEffect_OverHeat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelEffect_OverHeat, bOverHeated);
}


