#include "PalWorldSecurityPoliceSpawner.h"

UPalWorldSecurityPoliceSpawner::UPalWorldSecurityPoliceSpawner() {
    this->OwnerCharacter = NULL;
    this->CachedOwnerPlayerState = NULL;
    this->SpawnPointNum = 8;
    this->SpawnPointRadius = 5000.00f;
    this->SpawnMinRadius = 3000.00f;
    this->SpawnHeightOffset = 300.00f;
    this->RespawnCheckDistance = 8000.00f;
    this->RespawnCheckTime = 5.00f;
    this->RespawnRadius = 1000.00f;
    this->SpawnSearchStepRadius = 1000.00f;
    this->RespawnSearchStepRadius = 1000.00f;
    this->SpawnFailedCheckTime = 3.00f;
    this->LostSearchTime = 10.00f;
    this->PoliceInSightDistance = 3000.00f;
    this->DiscoveryNearDistance = 800.00f;
    this->DiscoveryFarDistance = 3000.00f;
    this->DiscoveryTimeToMaxNear = 3.00f;
    this->DiscoveryTimeToMaxFar = 10.00f;
    this->DiscoveryDecayPerSec = 0.20f;
    this->DiscoveryCrouchMultiplier = 0.50f;
    this->CombatHeliSpawnHeight = 4000.00f;
    this->CombatHeliSpawnRadius = 6000.00f;
    this->CombatHeliSpawnMinRadius = 3000.00f;
    this->CombatHeliInSightDistance = 8000.00f;
    this->CombatHeliRespawnCheckDistance = 15000.00f;
    this->CombatHeliRespawnRadius = 6000.00f;
    this->CombatHeliDiscoveryNearDistance = 4000.00f;
    this->CombatHeliDiscoveryFarDistance = 8000.00f;
}

void UPalWorldSecurityPoliceSpawner::TickSpawner(float DeltaTime) {
}

void UPalWorldSecurityPoliceSpawner::SetupOwner(AActor* OwnerActor) {
}

void UPalWorldSecurityPoliceSpawner::SetDropOffInProgress(bool bInProgress) {
}

void UPalWorldSecurityPoliceSpawner::ReporterChangeAction_Implementation(APalCharacter* Reporter, APalCharacter* Criminal) {
}

void UPalWorldSecurityPoliceSpawner::OnWantedPlayerCountChanged() {
}

void UPalWorldSecurityPoliceSpawner::OnWanted(UPalIndividualCharacterHandle* CriminalHandle, FPalWorldSecurityWantedStateInfo WantedStateInfo) {
}

void UPalWorldSecurityPoliceSpawner::OnReleaseWanted(UPalIndividualCharacterHandle* CriminalHandle) {
}

void UPalWorldSecurityPoliceSpawner::OnPoliceInSightChanged_Client(bool IsInSight, bool IsWanted) {
}

void UPalWorldSecurityPoliceSpawner::OnPoliceAlertStateChanged_Client(bool IsAlerted, bool IsFound, float DiscoveryGaugeNormalized, float DiscoveryGaugeRatePerSec, bool IsWanted) {
}

void UPalWorldSecurityPoliceSpawner::OnOwnerDead(UPalIndividualCharacterParameter* IndividualParameter) {
}

void UPalWorldSecurityPoliceSpawner::OnOwnerCharacterDestroyed(AActor* DestroyedActor) {
}

void UPalWorldSecurityPoliceSpawner::OnInitializedNPC_Implementation(APalAIController* NPCAIController) {
}

void UPalWorldSecurityPoliceSpawner::OnInitializedCharacter(APalCharacter* Character) {
}


bool UPalWorldSecurityPoliceSpawner::IsRespawn() const {
    return false;
}

bool UPalWorldSecurityPoliceSpawner::IsPoliceFound() const {
    return false;
}

bool UPalWorldSecurityPoliceSpawner::IsPoliceAlerted() const {
    return false;
}

void UPalWorldSecurityPoliceSpawner::Initialize() {
}

TArray<APalAIController*> UPalWorldSecurityPoliceSpawner::GetSpawnedPoliceControllers() const {
    return TArray<APalAIController*>();
}

UPalIndividualCharacterHandle* UPalWorldSecurityPoliceSpawner::GetOwnerHandle() {
    return NULL;
}

APalCharacter* UPalWorldSecurityPoliceSpawner::GetOwnerCharacter() {
    return NULL;
}

float UPalWorldSecurityPoliceSpawner::GetLostSearchTime() const {
    return 0.0f;
}

float UPalWorldSecurityPoliceSpawner::GetDiscoveryGaugeNormalized() const {
    return 0.0f;
}

float UPalWorldSecurityPoliceSpawner::GetCurrentLostSearchTimer() const {
    return 0.0f;
}

bool UPalWorldSecurityPoliceSpawner::FindSpawnLocation(const FVector& PlayerLocation, TArray<FVector>& OutLocations) {
    return false;
}

void UPalWorldSecurityPoliceSpawner::FinderChangeAction_Implementation(APalCharacter* Reporter, APalCharacter* WantedPlayer, EPalOrganizationType Organization) {
}

bool UPalWorldSecurityPoliceSpawner::FindCombatHeliSpawnLocation(const FVector& PlayerLocation, int32 NumLocations, TArray<FVector>& OutLocations) {
    return false;
}

bool UPalWorldSecurityPoliceSpawner::CheckPoliceAIActionState_Implementation(APalAIController* CheckPolice) {
    return false;
}

void UPalWorldSecurityPoliceSpawner::AddPolice(UPalIndividualCharacterHandle* PoliceHandle, APalAIController* AIController, bool bIsCombatHeli) {
}


