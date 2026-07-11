#include "PalNetworkInvaderComponent.h"

UPalNetworkInvaderComponent::UPalNetworkInvaderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkInvaderComponent::RequestRecruitPal_Implementation(APalNPC* NPC) {
}

void UPalNetworkInvaderComponent::RequestCancelInvader_Implementation(APalNPC* NPC) {
}

void UPalNetworkInvaderComponent::OnWaveTimeup_ToClient_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalNetworkInvaderComponent::OnStartWave_ToClient_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalNetworkInvaderComponent::OnInvaderStart_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalNetworkInvaderComponent::OnInvaderEnd_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalNetworkInvaderComponent::OnInvaderDeclaration_Implementation(const FDateTime& StartRealTime) {
}

void UPalNetworkInvaderComponent::OnInvaderCancel_Implementation() {
}

void UPalNetworkInvaderComponent::OnInvaderArrived_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalNetworkInvaderComponent::OnEndWave_ToClient_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}


