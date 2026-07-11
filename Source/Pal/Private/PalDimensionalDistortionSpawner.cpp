#include "PalDimensionalDistortionSpawner.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

APalDimensionalDistortionSpawner::APalDimensionalDistortionSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->DetectionRangeSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionRangeSphere"));
    this->WanderingRangeSphere = CreateDefaultSubobject<USphereComponent>(TEXT("WanderingRangeSphere"));
    this->PawnClass = NULL;
    this->MaxSpawnCount = 1;
    this->SpawnInterval = 10.00f;
    this->SpawnRadius = 500.00f;
    this->bSpawnOnBeginPlay = true;
    this->DetectionRangeSphere->SetupAttachment(RootComponent);
    this->WanderingRangeSphere->SetupAttachment(RootComponent);
}

APalDimensionalDistortionPawn* APalDimensionalDistortionSpawner::SpawnDistortion() {
    return NULL;
}

FGuid APalDimensionalDistortionSpawner::SelectRandomWarpPointLocationId() const {
    return FGuid{};
}

void APalDimensionalDistortionSpawner::OnPawnDestroyed(AActor* DestroyedActor) {
}

bool APalDimensionalDistortionSpawner::IsMaxSpawnCountReached() const {
    return false;
}

USphereComponent* APalDimensionalDistortionSpawner::GetWanderingRangeSphere() const {
    return NULL;
}

USphereComponent* APalDimensionalDistortionSpawner::GetDetectionRangeSphere() const {
    return NULL;
}

int32 APalDimensionalDistortionSpawner::GetCurrentSpawnCount() const {
    return 0;
}

void APalDimensionalDistortionSpawner::DespawnDistortion(APalDimensionalDistortionPawn* Pawn) {
}

void APalDimensionalDistortionSpawner::DespawnAllDistortions() {
}


