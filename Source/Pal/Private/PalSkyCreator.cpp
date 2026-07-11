#include "PalSkyCreator.h"
#include "PalPostProcessHeightFogComponent.h"

APalSkyCreator::APalSkyCreator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPalPostProcessHeightFogComponent>(TEXT("Exponential Height Fog Component"))) {
    this->bEnableExponentialHeightFog = false;
    this->LightningParameters.AddDefaulted(4);
    this->ExponentialHeightFog->SetupAttachment(RootComponent);
}


