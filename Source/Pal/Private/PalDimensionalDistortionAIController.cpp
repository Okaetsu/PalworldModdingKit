#include "PalDimensionalDistortionAIController.h"

APalDimensionalDistortionAIController::APalDimensionalDistortionAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentState = EPalDimensionalDistortionState::Idle;
    this->AcceptanceRadius = 50.00f;
    this->DefaultDetectionRadius = 5000.00f;
    this->DefaultWanderingRadius = 500.00f;
    this->TeleportTriggerRadius = 200.00f;
    this->bUsePathfinding = true;
    this->bAllowPartialPath = true;
    this->bIsMoveInProgress = false;
    this->TargetUpdateInterval = 1.00f;
    this->ContactDuration = 0.00f;
    this->TeleportingDuration = 2.00f;
    this->WanderingDestinationInterval = 3.00f;
}

void APalDimensionalDistortionAIController::UpdateTargetPlayer() {
}

void APalDimensionalDistortionAIController::SetAcceptanceRadius(float NewRadius) {
}

void APalDimensionalDistortionAIController::MoveToTargetLocation(const FVector& Location) {
}

void APalDimensionalDistortionAIController::MoveToTarget(AActor* Target) {
}

bool APalDimensionalDistortionAIController::IsTargetInRange(AActor* Target) const {
    return false;
}

bool APalDimensionalDistortionAIController::IsMoveInProgress() const {
    return false;
}

float APalDimensionalDistortionAIController::GetWanderingRadiusFromSpawner() const {
    return 0.0f;
}

FVector APalDimensionalDistortionAIController::GetSpawnerLocation() const {
    return FVector{};
}

APalDimensionalDistortionSpawner* APalDimensionalDistortionAIController::GetOwnerSpawner() const {
    return NULL;
}

float APalDimensionalDistortionAIController::GetDetectionRadiusFromSpawner() const {
    return 0.0f;
}

APalPlayerCharacter* APalDimensionalDistortionAIController::GetCurrentTargetPlayer() const {
    return NULL;
}

EPalDimensionalDistortionState APalDimensionalDistortionAIController::GetCurrentState() const {
    return EPalDimensionalDistortionState::Idle;
}

float APalDimensionalDistortionAIController::GetAcceptanceRadius() const {
    return 0.0f;
}

APalPlayerCharacter* APalDimensionalDistortionAIController::FindNearestPlayerInRadius(float SearchRadius) const {
    return NULL;
}

APalPlayerCharacter* APalDimensionalDistortionAIController::FindNearestPlayer() const {
    return NULL;
}


