#include "PalMapObjectAutoDecayOnDamag.h"
#include "Components/SceneComponent.h"
#include "PalMapObjectDetectCharacterSphereComponent.h"

APalMapObjectAutoDecayOnDamag::APalMapObjectAutoDecayOnDamag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DetectSphere = CreateDefaultSubobject<UPalMapObjectDetectCharacterSphereComponent>(TEXT("DetectSphere"));
    this->DecayEffectActorClass = NULL;
    this->DetectSphere->SetupAttachment(RootComponent);
}

void APalMapObjectAutoDecayOnDamag::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APalMapObjectAutoDecayOnDamag::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APalMapObjectAutoDecayOnDamag::Multicast_StartDecayEffect_Implementation() {
}


