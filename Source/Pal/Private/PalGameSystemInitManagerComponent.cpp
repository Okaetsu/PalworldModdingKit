#include "PalGameSystemInitManagerComponent.h"

UPalGameSystemInitManagerComponent::UPalGameSystemInitManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanReferToWorldObject = false;
    this->CurrentSequenceIndex = -1;
}


