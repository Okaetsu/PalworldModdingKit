#include "PalBodyPartsSphereComponent.h"
#include "Net/UnrealNetwork.h"

UPalBodyPartsSphereComponent::UPalBodyPartsSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->bDynamicObstacle = true;
    this->BodyPartsType = EPalBodyPartsType::Normal;
    this->BodyPartsFlags = 0;
}

void UPalBodyPartsSphereComponent::OnRep_BroadcastCollisionProfileName() {
}

void UPalBodyPartsSphereComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBodyPartsSphereComponent, BroadcastCollisionProfileName);
}


