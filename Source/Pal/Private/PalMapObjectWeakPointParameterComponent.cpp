#include "PalMapObjectWeakPointParameterComponent.h"

UPalMapObjectWeakPointParameterComponent::UPalMapObjectWeakPointParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitAngleThreshold = 10.00f;
    this->AllowAttackTypeList.AddDefaulted(6);
    this->MaxNonRegularDamage = 10;
}


