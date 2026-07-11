#include "PalCharacterLiftupObjectComponent.h"
#include "Net/UnrealNetwork.h"

UPalCharacterLiftupObjectComponent::UPalCharacterLiftupObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrowState = EPalCharacterLiftupObjectThrowState::None;
    this->bEnableLiftup = false;
    this->LiftingPlayerCharacter = NULL;
    this->ThrowIgnorePlayerDuration = 0.50f;
}

void UPalCharacterLiftupObjectComponent::SetEnable(const bool bInEnable) {
}

void UPalCharacterLiftupObjectComponent::OnOverlapEndCageAreaWalls() {
}

void UPalCharacterLiftupObjectComponent::OnHitOwnerMainMesh(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UPalCharacterLiftupObjectComponent::IsLifting() const {
    return false;
}

FGuid UPalCharacterLiftupObjectComponent::GetLastLiftRequestedPlayerUId() const {
    return FGuid{};
}

void UPalCharacterLiftupObjectComponent::BroadcastMarkThrowReleased_Implementation() {
}

void UPalCharacterLiftupObjectComponent::BroadcastClearThrowState_Implementation() {
}

void UPalCharacterLiftupObjectComponent::BroadcastBeginThrowPitching_Implementation() {
}

void UPalCharacterLiftupObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalCharacterLiftupObjectComponent, bEnableLiftup);
}


