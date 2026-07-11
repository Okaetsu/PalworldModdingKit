#include "PalAcidBoxComponent.h"
#include "EPalStatusHitType.h"
#include "EPalStatusID.h"

UPalAcidBoxComponent::UPalAcidBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->statusID = EPalStatusID::AcidDamage;
    this->StatusHitType = EPalStatusHitType::Acid;
}


