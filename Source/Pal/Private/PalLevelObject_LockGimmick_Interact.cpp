#include "PalLevelObject_LockGimmick_Interact.h"

APalLevelObject_LockGimmick_Interact::APalLevelObject_LockGimmick_Interact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractActionClass = NULL;
}

void APalLevelObject_LockGimmick_Interact::EventOnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}


