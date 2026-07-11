#include "PalOilrigNPCSpawnerBase.h"

APalOilrigNPCSpawnerBase::APalOilrigNPCSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsRunOnAnyThread = true;
    this->SpawnDistance = 40000.00f;
    this->DespawnDistance = 50000.00f;
    this->SelfOilrigType = EPalOilrigType::Debug;
    this->Squad = NULL;
}

void APalOilrigNPCSpawnerBase::Tick_Spawning(float DeltaTime) {
}

void APalOilrigNPCSpawnerBase::Tick_Spawned(float DeltaTime) {
}

void APalOilrigNPCSpawnerBase::Tick_Despawning(float DeltaTime) {
}

void APalOilrigNPCSpawnerBase::SetSpawnedFlag(bool bInIsSpawned) {
}

void APalOilrigNPCSpawnerBase::RequestDespawn() {
}

void APalOilrigNPCSpawnerBase::Request_TickSpawningForGameThread(float DeltaTime) {
}

void APalOilrigNPCSpawnerBase::Request_TickSpawnedForGameThread(float DeltaTime) {
}

void APalOilrigNPCSpawnerBase::Request_TickDespawningForGameThread(float DeltaTime) {
}


void APalOilrigNPCSpawnerBase::OnChangeOneNPCCombatMode(APalCharacter* Character, bool IsCombat) {
}

void APalOilrigNPCSpawnerBase::NotifyWipedOut() {
}

bool APalOilrigNPCSpawnerBase::IsWipedOut() {
    return false;
}

bool APalOilrigNPCSpawnerBase::IsSpawned() const {
    return false;
}


EPalOilrigNPCSpawnerCheckResultType APalOilrigNPCSpawnerBase::CheckSpawnDistance(bool NewIsSpawned) {
    return EPalOilrigNPCSpawnerCheckResultType::Ignore;
}




void APalOilrigNPCSpawnerBase::AddCharacterToGroup(UPalIndividualCharacterHandle* Handle) {
}


