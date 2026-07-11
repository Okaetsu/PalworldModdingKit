#include "PalPatrolMovementComponent.h"

UPalPatrolMovementComponent::UPalPatrolMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveSpeed = 50.00f;
    this->NetworkSimulatedSmoothLocationTime = 0.01f;
    this->ListenServerNetworkSimulatedSmoothLocationTime = 0.04f;
    this->NetworkMaxSmoothUpdateDistance = 256.00f;
    this->NetworkNoSmoothUpdateDistance = 384.00f;
    this->bSkipMovementWhenFarFromPlayers = false;
    this->MovementActiveDistanceFromPlayers = 0.00f;
    this->MovementPlayerDistanceCheckInterval = 0.50f;
    this->TargetMesh = NULL;
    this->ProgressTimeForServer = 0.00f;
}


