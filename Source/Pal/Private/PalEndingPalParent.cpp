#include "PalEndingPalParent.h"
#include "Components/SceneComponent.h"

APalEndingPalParent::APalEndingPalParent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->PalTemplateClass = NULL;
    this->TurnInterpSpeed = 180.00f;
    this->MinHideRadius = 0.00f;
}

void APalEndingPalParent::TurnToAll(AActor* Target) {
}

void APalEndingPalParent::SetActiveByTag(ULevelSequenceDirector* Director, bool bActive) {
}

void APalEndingPalParent::LookAtAll(AActor* Target) {
}

void APalEndingPalParent::HideUnboundPals() {
}


