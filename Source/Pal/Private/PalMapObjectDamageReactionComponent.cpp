#include "PalMapObjectDamageReactionComponent.h"

UPalMapObjectDamageReactionComponent::UPalMapObjectDamageReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectSlot = NULL;
    this->OverrideUseEffectSlotClass = NULL;
}


