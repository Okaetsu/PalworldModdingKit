#include "PalNightVisionComponent.h"

UPalNightVisionComponent::UPalNightVisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NvPPMaterial = NULL;
}

void UPalNightVisionComponent::ToggleNightVision(float Weight) {
}

void UPalNightVisionComponent::SetNightVisionEnabled_ToClient_Implementation(bool bEnable, float Weight) {
}

void UPalNightVisionComponent::SetNightVisionEnabled_ForServer_Implementation(bool bEnable) {
}

void UPalNightVisionComponent::SetNightVisionEnabled(bool bEnable, float Weight) {
}

bool UPalNightVisionComponent::IsNightVisionEnabled_ForServer() const {
    return false;
}

bool UPalNightVisionComponent::IsNightVisionEnabled_ForClient() const {
    return false;
}


