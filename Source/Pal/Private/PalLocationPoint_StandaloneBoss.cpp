#include "PalLocationPoint_StandaloneBoss.h"
#include "Net/UnrealNetwork.h"

UPalLocationPoint_StandaloneBoss::UPalLocationPoint_StandaloneBoss() {
    this->BossTower = NULL;
}

APalBossTower* UPalLocationPoint_StandaloneBoss::GetBossTower() const {
    return NULL;
}

void UPalLocationPoint_StandaloneBoss::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPoint_StandaloneBoss, BossTower);
}


