#include "PalNegotiatorComponent.h"
#include "Net/UnrealNetwork.h"

UPalNegotiatorComponent::UPalNegotiatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestroyBeforeInvadeSeconds = 5.00f;
    this->FadeOutDestroyDelaySeconds = 1.00f;
    this->InvaderCancelCost = 0;
}

void UPalNegotiatorComponent::Setup() {
}

void UPalNegotiatorComponent::OnTeleportBaseCampToAll_Implementation(const FVector& Location, const FRotator& Rotation) {
}

void UPalNegotiatorComponent::OnOwnerDead(FPalDeadInfo DeadInfo) {
}

void UPalNegotiatorComponent::OnOwnerCaptured(APalCharacter* SelfCharacter, APalCharacter* Attacker) {
}

EPalInvaderCancelResult UPalNegotiatorComponent::CancelInvader(const FGuid& RequestPlayerUId) {
    return EPalInvaderCancelResult::Success;
}

void UPalNegotiatorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalNegotiatorComponent, InvaderCancelCost);
}


