#include "PalStreamingSourceActor.h"
#include "Components/SceneComponent.h"

APalStreamingSourceActor::APalStreamingSourceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


