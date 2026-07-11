#include "PalJetpackGliderComponent.h"
#include "Net/UnrealNetwork.h"

UPalJetpackGliderComponent::UPalJetpackGliderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JetpackActionClass = NULL;
    this->BaseStaminaCostPerSecond = 15.00f;
    this->BoostStaminaCostPerSecond = 15.00f;
    this->AscentPenaltyMultiplier = 2.00f;
    this->DescentReductionMultiplier = 0.50f;
    this->MinimumJetpackGlideDuration = 1.00f;
    this->bIsBoostingReplicated = false;
    this->bIsJetpackGliding = false;
}

void UPalJetpackGliderComponent::UpdateFlightState(float PitchAngle, bool bHasPitchInput) {
}

void UPalJetpackGliderComponent::StartJetpackGliding() {
}

void UPalJetpackGliderComponent::StartBoost() {
}

void UPalJetpackGliderComponent::SetBoostReplicated_ToServer_Implementation(bool bNewBoosting) {
}

void UPalJetpackGliderComponent::OnWeaponChanged(APalWeaponBase* NewWeapon) {
}

void UPalJetpackGliderComponent::OnRep_IsJetpackGliding() {
}

void UPalJetpackGliderComponent::OnRep_IsBoosting() {
}

void UPalJetpackGliderComponent::OnJetpackShootingChanged(bool IsShooting) {
}

bool UPalJetpackGliderComponent::IsUsingFuelSystem() const {
    return false;
}

bool UPalJetpackGliderComponent::IsThresoldItemComsumed() const {
    return false;
}

bool UPalJetpackGliderComponent::IsJetpackGliding() const {
    return false;
}

bool UPalJetpackGliderComponent::IsJetpackForceCenterCameraEnabled(float& OutInterpSpeed) const {
    return false;
}

bool UPalJetpackGliderComponent::IsJetpackFiring() const {
    return false;
}

bool UPalJetpackGliderComponent::IsEquipJetpackGlider() const {
    return false;
}

bool UPalJetpackGliderComponent::IsBoostingReplicated() const {
    return false;
}

bool UPalJetpackGliderComponent::IsBoosting() const {
    return false;
}

float UPalJetpackGliderComponent::GetFuelDisplayPercentage() const {
    return 0.0f;
}

float UPalJetpackGliderComponent::GetBoostStaminaCostPerSecond() const {
    return 0.0f;
}

float UPalJetpackGliderComponent::GetBaseStaminaCostPerSecond() const {
    return 0.0f;
}

void UPalJetpackGliderComponent::EndJetpackGliding_ToServer_Implementation() {
}

void UPalJetpackGliderComponent::EndJetpackGliding() {
}

void UPalJetpackGliderComponent::EndBoost() {
}

bool UPalJetpackGliderComponent::ConsumeFuel(float Amount) {
    return false;
}

bool UPalJetpackGliderComponent::ConsumeBoostItem() {
    return false;
}

bool UPalJetpackGliderComponent::CanStartJetpackGliding() const {
    return false;
}

bool UPalJetpackGliderComponent::CanEndJetpackGliding() const {
    return false;
}

float UPalJetpackGliderComponent::CalculateStaminaCost() const {
    return 0.0f;
}

void UPalJetpackGliderComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalJetpackGliderComponent, bIsBoostingReplicated);
    DOREPLIFETIME(UPalJetpackGliderComponent, bIsJetpackGliding);
}


