#include "PalSwimSpeedBuffBoxComponent.h"
#include "EPalStatusHitType.h"
#include "EPalStatusID.h"

UPalSwimSpeedBuffBoxComponent::UPalSwimSpeedBuffBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->statusID = EPalStatusID::SwimSpeedUp;
    this->StatusHitType = EPalStatusHitType::SwimSpeedUp;
    this->SwimSpeedRate = 1.00f;
    this->bTargetPlayer = false;
    this->bTargetOtomo = true;
    this->bTargetWild = false;
}

void UPalSwimSpeedBuffBoxComponent::OnCharacterInitializeComplete(APalCharacter* Character) {
}


