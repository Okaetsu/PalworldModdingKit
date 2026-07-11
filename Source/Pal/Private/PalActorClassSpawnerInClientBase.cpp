#include "PalActorClassSpawnerInClientBase.h"

APalActorClassSpawnerInClientBase::APalActorClassSpawnerInClientBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedActor = NULL;
}

void APalActorClassSpawnerInClientBase::ForceDespawn() {
}


