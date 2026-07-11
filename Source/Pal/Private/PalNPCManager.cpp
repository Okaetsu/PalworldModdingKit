#include "PalNPCManager.h"

UPalNPCManager::UPalNPCManager() {
    this->AIOnNavMeshFilterClass = NULL;
    this->DrinkWaterSpotProvider = NULL;
    this->NPCAIControllerBaseClass = NULL;
    this->UniqueNPCDataTable = NULL;
    this->NPCTalkFlowDataTable = NULL;
}

void UPalNPCManager::SpawNPCCallback(FPalInstanceID ID) {
}

UPalIndividualCharacterHandle* UPalNPCManager::SpawnNPCForServer(FPalNPCSpawnInfo SpawnInfo, UPalNPCManager::FNPCSpawnCallback spawnCallback) {
    return NULL;
}

void UPalNPCManager::SetTrueNPCAppearFlag(FPalDataTableRowName_NPCAppearFlagData flagName) {
}

void UPalNPCManager::SetEnemyCampStatus(FName KeyName, FPalEnemyCampStatus EnemyCampStatus) {
}

void UPalNPCManager::RemoveGroupWhenDestoryActor(AActor* DestoryActor) {
}

bool UPalNPCManager::IsTransientTalkCount(const APalCharacter* Character) const {
    return false;
}

bool UPalNPCManager::IsTalkable(const APalCharacter* Character) const {
    return false;
}

UPalNPCTalkFlowAssetBase* UPalNPCManager::GetNPCTalkFlowAssetById(const FName& TalkId) const {
    return NULL;
}

UPalNPCTalkFlowAssetBase* UPalNPCManager::GetNPCTalkFlowAsset(APalCharacter* Character) const {
    return NULL;
}

FPalEnemyCampStatus UPalNPCManager::GetEnemyCampStatus(FName KeyName) const {
    return FPalEnemyCampStatus{};
}

UPalWildPalDrinkWaterSpotProvider* UPalNPCManager::GetDrinkWaterSpotProvider() {
    return NULL;
}

FName UPalNPCManager::GetCharacterIDFromUniqueNPCID(FName UniqueNPCID) const {
    return NAME_None;
}

FName UPalNPCManager::GetCharacterIDFromCharacterIDAndUniqueNPCID(FName CharacterID, FName UniqueNPCID) {
    return NAME_None;
}

bool UPalNPCManager::GetCanSpawnByNPCAppearFlag(FPalDataTableRowName_NPCAppearFlagData flagName, bool FlagCondition) {
    return false;
}

void UPalNPCManager::AllResetBossRespawnFlag() {
}


