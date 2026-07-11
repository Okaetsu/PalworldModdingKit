#include "PalSporeFieldVolumeBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

APalSporeFieldVolumeBase::APalSporeFieldVolumeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->SporeClass = NULL;
    this->SpawnPointCount = 16;
    this->SpawnSeed = 0;
    this->SpawnSeedCache = 0;
    this->bRandomizeSpawnPointsInBox = true;
    this->SpawnZOffset = 50.00f;
    this->SpawnInnerMarginCm = 50.00f;
    this->SpawnPerBurst = 4;
    this->SpawnInterval = 0.05f;
    this->WarningRadius = 500.00f;
    this->DespawnPerBurst = 8;
    this->bSpawned = false;
    this->bIsActiveVolume = false;
    this->BoxComponent->SetupAttachment(RootComponent);
}

void APalSporeFieldVolumeBase::SetActiveVolume(bool bNewActive) {
}

void APalSporeFieldVolumeBase::NotifyExploded(int32 PointIndex, APawn* SporePawn) {
}

bool APalSporeFieldVolumeBase::IsSpawned() const {
    return false;
}

bool APalSporeFieldVolumeBase::IsActiveVolume() const {
    return false;
}

FVector APalSporeFieldVolumeBase::GetManagerCheckLocation_Implementation() const {
    return FVector{};
}

void APalSporeFieldVolumeBase::Editor_ShowSpawnPoints() {
}

void APalSporeFieldVolumeBase::Editor_HideSpawnPoints() {
}

void APalSporeFieldVolumeBase::Editor_GenerateSpawnPoints() {
}

void APalSporeFieldVolumeBase::Editor_DebugDrawSpawnPoints() {
}

void APalSporeFieldVolumeBase::DebugDrawSpawnPoints(float Duration, float Radius) const {
}




