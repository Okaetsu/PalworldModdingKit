#include "PalMapObjectFarmCrop.h"
#include "Net/UnrealNetwork.h"

APalMapObjectFarmCrop::APalMapObjectFarmCrop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CurrentState = EPalFarmCropState::None;
    this->GrowupFX = NULL;
    this->StateChangeAnimTargetMesh = NULL;
    this->StateChangeAnimCurve = NULL;
}

void APalMapObjectFarmCrop::OnRep_CurrentState(EPalFarmCropState OldValue) {
}

void APalMapObjectFarmCrop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalMapObjectFarmCrop, CurrentState);
}


