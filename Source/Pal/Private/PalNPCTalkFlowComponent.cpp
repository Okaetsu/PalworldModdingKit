#include "PalNPCTalkFlowComponent.h"

UPalNPCTalkFlowComponent::UPalNPCTalkFlowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TalkSystem = NULL;
}

void UPalNPCTalkFlowComponent::RequestStartTalkFlow() {
}

void UPalNPCTalkFlowComponent::RequestEndTalkFlow(bool bIsCancel) {
}


void UPalNPCTalkFlowComponent::OnFinishTalkFlow() {
}

bool UPalNPCTalkFlowComponent::LaunchTalkIncident(AActor* Other) {
    return false;
}

FGuid UPalNPCTalkFlowComponent::GetToken() const {
    return FGuid{};
}

UPalNPCTalkSystem* UPalNPCTalkFlowComponent::GetTalkSystem() const {
    return NULL;
}

APalCharacter* UPalNPCTalkFlowComponent::GetTalkerAsPalCharacter() const {
    return NULL;
}

AActor* UPalNPCTalkFlowComponent::GetTalker() const {
    return NULL;
}

void UPalNPCTalkFlowComponent::CancelTalkFlow() {
}


