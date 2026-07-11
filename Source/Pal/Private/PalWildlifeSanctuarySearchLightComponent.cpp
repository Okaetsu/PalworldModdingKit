#include "PalWildlifeSanctuarySearchLightComponent.h"
#include "Net/UnrealNetwork.h"
#include "PalSearchLightRotationStrategy_LookAt.h"
#include "PalSearchLightRotationStrategy_Random.h"
#include "PalSearchLightRotationStrategy_ReturnToInitial.h"

UPalWildlifeSanctuarySearchLightComponent::UPalWildlifeSanctuarySearchLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LookAtStrategyClass = UPalSearchLightRotationStrategy_LookAt::StaticClass();
    this->RandomStrategyClass = UPalSearchLightRotationStrategy_Random::StaticClass();
    this->ReturnToInitialStrategyClass = UPalSearchLightRotationStrategy_ReturnToInitial::StaticClass();
    this->CurrentRotationStrategy = NULL;
    this->LookAtStrategy = NULL;
    this->RandomStrategy = NULL;
    this->ReturnToInitialStrategy = NULL;
}

void UPalWildlifeSanctuarySearchLightComponent::UseRandomRotation() {
}

void UPalWildlifeSanctuarySearchLightComponent::SetSearchEnabled(bool bEnabled) {
}

void UPalWildlifeSanctuarySearchLightComponent::SetLookTarget(AActor* TargetActor) {
}

void UPalWildlifeSanctuarySearchLightComponent::ResetToInitialRotation() {
}

FRotator UPalWildlifeSanctuarySearchLightComponent::GetCurrentRotator() const {
    return FRotator{};
}

void UPalWildlifeSanctuarySearchLightComponent::ClearRotationStrategy() {
}

void UPalWildlifeSanctuarySearchLightComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWildlifeSanctuarySearchLightComponent, CurrentRotator);
}


