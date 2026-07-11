#include "PalCrimeDisableVolume.h"
#include "Components/BoxComponent.h"

APalCrimeDisableVolume::APalCrimeDisableVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("VolumeBox"));
    this->VolumeBox = (UBoxComponent*)RootComponent;
    this->bClearExistingCrimeOnEnter = true;
    this->bClearExistingWantedOnEnter = true;
}

void APalCrimeDisableVolume::OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APalCrimeDisableVolume::OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


