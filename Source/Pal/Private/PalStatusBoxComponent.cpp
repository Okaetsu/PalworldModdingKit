#include "PalStatusBoxComponent.h"

UPalStatusBoxComponent::UPalStatusBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->statusID = EPalStatusID::None;
    this->StatusHitType = EPalStatusHitType::None;
}

void UPalStatusBoxComponent::EndOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalStatusBoxComponent::BeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


