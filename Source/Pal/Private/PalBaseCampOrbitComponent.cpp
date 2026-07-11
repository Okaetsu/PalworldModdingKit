#include "PalBaseCampOrbitComponent.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampOrbitComponent::UPalBaseCampOrbitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOrbitActive = false;
    this->OrbitRadiusX = 8000.00f;
    this->OrbitRadiusY = 6000.00f;
    this->OrbitSpeed = 0.08f;
    this->VerticalWaveAmplitude = 500.00f;
}

void UPalBaseCampOrbitComponent::OnRep_OrbitActive() {
}

bool UPalBaseCampOrbitComponent::IsOrbitActive() const {
    return false;
}

void UPalBaseCampOrbitComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampOrbitComponent, bOrbitActive);
}


