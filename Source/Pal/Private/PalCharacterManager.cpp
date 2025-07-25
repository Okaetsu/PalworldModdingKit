#include "PalCharacterManager.h"

UPalCharacterManager::UPalCharacterManager() {
    this->AttackNearBaseClass = NULL;
    this->AttackFarBaseClass = NULL;
}

void UPalCharacterManager::SpawnPhantomByHandle(UPalIndividualCharacterHandle* Handle, FNetworkActorSpawnParameters SpawnParameter, UPalCharacterManager::FIndividualPhantomIDCallback spawnCallback) {
}

UPalIndividualCharacterHandle* UPalCharacterManager::SpawnNewCharacterWithInitializeParameterCallback(FPalIndividualCharacterSaveParameter InitParameter, FNetworkActorSpawnParameters SpawnParameter, EPalCharacterCompleteDelegatePriority InitializeParameterCallbackPriority, FPalOnCharacterCompleteInitializeParameter InitializeParameterCallback, UPalCharacterManager::FIndividualIDCallback spawnCallback) {
    return NULL;
}

UPalIndividualCharacterHandle* UPalCharacterManager::SpawnNewCharacter(FPalIndividualCharacterSaveParameter InitParameter, FNetworkActorSpawnParameters SpawnParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback) {
    return NULL;
}

void UPalCharacterManager::SpawnCharacterByHandleWithInitializeParameterCallback(UPalIndividualCharacterHandle* Handle, FNetworkActorSpawnParameters SpawnParameter, EPalCharacterCompleteDelegatePriority InitializeParameterCallbackPriority, FPalOnCharacterCompleteInitializeParameter InitializeParameterCallback, UPalCharacterManager::FIndividualIDCallback spawnCallback) {
}

void UPalCharacterManager::SpawnCharacterByHandle(UPalIndividualCharacterHandle* Handle, FNetworkActorSpawnParameters SpawnParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback) {
}

void UPalCharacterManager::RaiseToMainActor(UPalIndividualCharacterHandle* Handle, int32 PhantomId, UPalCharacterManager::FIndividualPhantomIDCallback Callback) {
}

void UPalCharacterManager::OnCreateIndividualID(FPalInstanceID ID) {
}

void UPalCharacterManager::OnChangeIndividualID_ClientInternal(FPalInstanceID ID, UPalIndividualCharacterParameter* Parameter) {
}

UPalIndividualCharacterHandleReference* UPalCharacterManager::GetIndividualHandleReference(FPalInstanceID ID) {
    return NULL;
}

UPalIndividualCharacterHandle* UPalCharacterManager::GetIndividualHandleFromCharacterParameter(UPalIndividualCharacterParameter* Parameter) {
    return NULL;
}

UPalIndividualCharacterHandle* UPalCharacterManager::GetIndividualHandle(FPalInstanceID ID) {
    return NULL;
}

UPalIndividualCharacterParameter* UPalCharacterManager::GetIndividualCharacterParameter(const FPalInstanceID& IndividualId) const {
    return NULL;
}

void UPalCharacterManager::DespawnPhantomByHandle(UPalIndividualCharacterHandle* Handle, int32 PhantomId, UPalCharacterManager::FIndividualPhantomIDCallback spawnCallback) {
}

void UPalCharacterManager::DespawnCharacterByHandle(UPalIndividualCharacterHandle* Handle, UPalCharacterManager::FIndividualIDCallback spawnCallback) {
}

UPalIndividualCharacterHandle* UPalCharacterManager::CreateIndividualByFixedID(FPalInstanceID ID, FPalIndividualCharacterSaveParameter InitParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback) {
    return NULL;
}

UPalIndividualCharacterHandle* UPalCharacterManager::CreateIndividual(FPalIndividualCharacterSaveParameter InitParameter, UPalCharacterManager::FIndividualIDCallback spawnCallback) {
    return NULL;
}


