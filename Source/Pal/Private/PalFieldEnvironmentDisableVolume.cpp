#include "PalFieldEnvironmentDisableVolume.h"
#include "Components/BoxComponent.h"

APalFieldEnvironmentDisableVolume::APalFieldEnvironmentDisableVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("VolumeBox"));
    this->VolumeBox = (UBoxComponent*)RootComponent;
    this->DisableFlags = 1;
}

void APalFieldEnvironmentDisableVolume::OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APalFieldEnvironmentDisableVolume::OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool APalFieldEnvironmentDisableVolume::IsInsideVolume(const FVector& Location) const {
    return false;
}

FBox APalFieldEnvironmentDisableVolume::GetBoundingBox() const {
    return FBox{};
}


