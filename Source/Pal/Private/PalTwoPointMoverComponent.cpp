#include "PalTwoPointMoverComponent.h"
#include "Net/UnrealNetwork.h"

UPalTwoPointMoverComponent::UPalTwoPointMoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartDelaySec = 0.50f;
}

void UPalTwoPointMoverComponent::StartMove(const FVector& InStart, const FVector& InEnd, float InDuration) {
}

void UPalTwoPointMoverComponent::OnRep_MoveData() {
}

void UPalTwoPointMoverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalTwoPointMoverComponent, MoveDataRep);
}


