#include "PalLavaBoxComponent.h"
#include "EPalStatusHitType.h"
#include "EPalStatusID.h"

UPalLavaBoxComponent::UPalLavaBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->statusID = EPalStatusID::LavaDamage;
    this->StatusHitType = EPalStatusHitType::Lava;
}


