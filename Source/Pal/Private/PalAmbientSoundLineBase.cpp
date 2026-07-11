#include "PalAmbientSoundLineBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "PalAkComponent.h"

APalAmbientSoundLineBase::APalAmbientSoundLineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AkComponent = CreateDefaultSubobject<UPalAkComponent>(TEXT("AkComponent"));
    this->ActivateTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivateTrigger"));
    this->AmbinetSoundLineObject = NULL;
    this->ActivateTrigger->SetupAttachment(RootComponent);
}


