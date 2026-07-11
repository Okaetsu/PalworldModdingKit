#include "PalDimensionalDistortionPawn.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "PalDimensionalDistortionAIController.h"
#include "PalDimensionalDistortionMovementComponent.h"

APalDimensionalDistortionPawn::APalDimensionalDistortionPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComponent"));
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = APalDimensionalDistortionAIController::StaticClass();
    this->CollisionComponent = (UCapsuleComponent*)RootComponent;
    this->MovementComponent = CreateDefaultSubobject<UPalDimensionalDistortionMovementComponent>(TEXT("MovementComponent"));
    this->MoveSpeed = 300.00f;
    this->AccelerationRate = 500.00f;
    this->InterpSpeed = 5.00f;
    this->TeleportCooldown = 5.00f;
    this->ReplicatedState = EPalDimensionalDistortionState::Idle;
    this->bWasClientContact = false;
}

void APalDimensionalDistortionPawn::OnTeleportSessionBegin_Multicast_Implementation(APalPlayerCharacter* TargetPlayer) {
}

void APalDimensionalDistortionPawn::OnTeleportSessionBegin_Implementation(APalPlayerCharacter* TargetPlayer) {
}

void APalDimensionalDistortionPawn::OnRep_ReplicatedState() {
}

void APalDimensionalDistortionPawn::Multicast_OnTeleportExecuted_Implementation(APalPlayerCharacter* TeleportedPlayer, FVector Destination) {
}

void APalDimensionalDistortionPawn::Multicast_CleanupPlayerRideStateForTeleport_Implementation(APalPlayerCharacter* Player) {
}

float APalDimensionalDistortionPawn::GetWarpRotationZ() const {
    return 0.0f;
}

FVector APalDimensionalDistortionPawn::GetWarpDestination() const {
    return FVector{};
}

APalPlayerCharacter* APalDimensionalDistortionPawn::GetTeleportSessionTarget() const {
    return NULL;
}

APalPlayerCharacter* APalDimensionalDistortionPawn::GetTargetPlayer() const {
    return NULL;
}

FVector APalDimensionalDistortionPawn::GetReturnLocation() const {
    return FVector{};
}

EPalDimensionalDistortionState APalDimensionalDistortionPawn::GetReplicatedState() const {
    return EPalDimensionalDistortionState::Idle;
}

APalDimensionalDistortionSpawner* APalDimensionalDistortionPawn::GetOwnerSpawner() const {
    return NULL;
}

UPalDimensionalDistortionMovementComponent* APalDimensionalDistortionPawn::GetDistortionMovementComponent() const {
    return NULL;
}

float APalDimensionalDistortionPawn::GetCollisionRadius() const {
    return 0.0f;
}

UCapsuleComponent* APalDimensionalDistortionPawn::GetCollisionComponent() const {
    return NULL;
}

FGuid APalDimensionalDistortionPawn::GetAssignedWarpPointLocationId() const {
    return FGuid{};
}

void APalDimensionalDistortionPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalDimensionalDistortionPawn, AssignedWarpPointLocationId);
    DOREPLIFETIME(APalDimensionalDistortionPawn, OwnerSpawner);
    DOREPLIFETIME(APalDimensionalDistortionPawn, ReplicatedState);
}


