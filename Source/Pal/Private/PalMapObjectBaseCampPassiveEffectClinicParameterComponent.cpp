#include "PalMapObjectBaseCampPassiveEffectClinicParameterComponent.h"

UPalMapObjectBaseCampPassiveEffectClinicParameterComponent::UPalMapObjectBaseCampPassiveEffectClinicParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseSanitySuppressRate = 5.00f;
    this->ClinicAssignedSanityRate = 5.00f;
    this->BaseSicknessSuppressRate = 5.00f;
    this->MaxHygieneStarLevel = 3;
}


