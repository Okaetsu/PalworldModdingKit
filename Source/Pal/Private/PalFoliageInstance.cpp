#include "PalFoliageInstance.h"
#include "Net/UnrealNetwork.h"

UPalFoliageInstance::UPalFoliageInstance() {
    this->Hp = -1;
    this->InstanceState = EPalFoliageInstanceState::Alive;
}

void UPalFoliageInstance::OnRep_WorldTransform() {
}

void UPalFoliageInstance::OnRep_State(EPalFoliageInstanceState OldState) {
}

void UPalFoliageInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalFoliageInstance, FoliageTypeId);
    DOREPLIFETIME(UPalFoliageInstance, Hp);
    DOREPLIFETIME(UPalFoliageInstance, InstanceState);
    DOREPLIFETIME(UPalFoliageInstance, WorldTransform);
}


