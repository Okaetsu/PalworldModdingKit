#include "PalDecayEffectActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

APalDecayEffectActor::APalDecayEffectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DecayMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DecayMeshComponent"));
    this->DecayMeshComponent->SetupAttachment(RootComponent);
}


void APalDecayEffectActor::FinishAndDestroy() {
}


