#include "PalCutsceneHideVolume.h"
#include "Components/SphereComponent.h"

APalCutsceneHideVolume::APalCutsceneHideVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->SphereComp = (USphereComponent*)RootComponent;
}

void APalCutsceneHideVolume::SetRadius(float InRadius) {
}

void APalCutsceneHideVolume::OnWeaponSpawnedForLoadout(APalWeaponBase* NewWeapon) {
}

void APalCutsceneHideVolume::OnWeaponPlacedOnCharacter(AActor* PlacedSubActor) {
}

void APalCutsceneHideVolume::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APalCutsceneHideVolume::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APalCutsceneHideVolume::Initialize(float InRadius, bool bEnableOverlapCapture) {
}

void APalCutsceneHideVolume::AddHiddenActors(const TArray<AActor*>& Actors) {
}


