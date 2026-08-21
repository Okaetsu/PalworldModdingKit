#include "PalObjectPoolActivateParameter.h"

FPalObjectPoolActivateParameter::FPalObjectPoolActivateParameter() {
    this->actorClass = NULL;
    this->Owner = NULL;
    this->Instigator = NULL;
    this->bSpawnIfEmpty = true;
    this->SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined;
}

