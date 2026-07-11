#include "PalCombatHeliPoliceDropOffComponent.h"

UPalCombatHeliPoliceDropOffComponent::UPalCombatHeliPoliceDropOffComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PoliceSpawnerModel = NULL;
    this->HoverOffsetDistance = 1500.00f;
    this->GroundSpawnRadius = 100.00f;
    this->GroundTraceDistance = 10000.00f;
    this->NavMeshProjectionRadius = 500.00f;
}

void UPalCombatHeliPoliceDropOffComponent::StartDropOff() {
}

void UPalCombatHeliPoliceDropOffComponent::SetupDropOff(int32 InPoliceNumForThisHeli, int32 InHeliIndex) {
}

void UPalCombatHeliPoliceDropOffComponent::SetPoliceSpawnerModel(UObject* InModel) {
}

void UPalCombatHeliPoliceDropOffComponent::NotifyPoliceDroppedOff() {
}

bool UPalCombatHeliPoliceDropOffComponent::IsDropOffComplete() const {
    return false;
}

bool UPalCombatHeliPoliceDropOffComponent::HasLockedDropOffPoint() const {
    return false;
}

int32 UPalCombatHeliPoliceDropOffComponent::GetRemainingDropOffCount() const {
    return 0;
}

UObject* UPalCombatHeliPoliceDropOffComponent::GetPoliceSpawnerModel() const {
    return NULL;
}

int32 UPalCombatHeliPoliceDropOffComponent::GetPoliceNumForThisHeli() const {
    return 0;
}

bool UPalCombatHeliPoliceDropOffComponent::GetNextDropOffGroundLocation(FVector& OutGroundLocation) {
    return false;
}

FVector UPalCombatHeliPoliceDropOffComponent::GetLockedHoverPoint() const {
    return FVector{};
}

FVector UPalCombatHeliPoliceDropOffComponent::GetLockedDropOffPoint() const {
    return FVector{};
}

EPalHeliDropOffState UPalCombatHeliPoliceDropOffComponent::GetDropOffState() const {
    return EPalHeliDropOffState::Idle;
}

bool UPalCombatHeliPoliceDropOffComponent::FindAndLockDropOffPoint(const FVector& PlayerLocation, float SearchRadius, float HoverAltitude, FVector& OutDropOffPoint, FVector& OutHoverPoint) {
    return false;
}

bool UPalCombatHeliPoliceDropOffComponent::CanDropOffAtLocation(const FVector& CheckLocation) {
    return false;
}

bool UPalCombatHeliPoliceDropOffComponent::CanDropOffAtCurrentLocation() {
    return false;
}

int32 UPalCombatHeliPoliceDropOffComponent::AbortDropOff() {
    return 0;
}


