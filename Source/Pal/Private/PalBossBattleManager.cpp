#include "PalBossBattleManager.h"

UPalBossBattleManager::UPalBossBattleManager() {
    this->PlayerRespawnTimeLimit = 60.00f;
    this->BGMFadeDuration = 1.00f;
    this->BossBattleSequencerClass = NULL;
    this->EndingCutsceneProcess = NULL;
    this->HardUnlockTiggerBoss = EPalBossType::SakurajimaBoss;
    this->RecommendLevelPlus = 0;
}

void UPalBossBattleManager::UnlockAchievement(EPalBossType BossType) {
}

void UPalBossBattleManager::UnloadBossBattle_ServerInternal(EPalBossType BossType) {
}

void UPalBossBattleManager::OnBossCharacterSpawned(APalCharacter* SpawnedCharacter) {
}

void UPalBossBattleManager::OnBossBattleCombatStart(EPalBossType BossType) {
}

void UPalBossBattleManager::LoadAsyncBossBattle_ServerInternal(EPalBossType BossType) {
}

bool UPalBossBattleManager::IsFieldBossType(EPalBossType BossType) const {
    return false;
}

FTransform UPalBossBattleManager::GetTopWarpPointTransform(EPalBossType BossType) const {
    return FTransform{};
}

FPalBossBattleStaticInfo UPalBossBattleManager::GetStaticInfo(EPalBossType BossType) const {
    return FPalBossBattleStaticInfo{};
}

FTransform UPalBossBattleManager::GetPlayerSpawnTransformForMultiPlayer(int32 Index, FVector Location, FRotator Rotate, float Offset) {
    return FTransform{};
}

int32 UPalBossBattleManager::GetMaxJoinablePlayerNum() {
    return 0;
}

UPalBossBattleSequencer* UPalBossBattleManager::GetLocalBossBattleSequencer() const {
    return NULL;
}

bool UPalBossBattleManager::GetIsServer() {
    return false;
}

EPalBossType UPalBossBattleManager::GetHardUnlockTiggerBoss() const {
    return EPalBossType::None;
}

float UPalBossBattleManager::GetBossHPMultiPlayerRate(int32 JoinedPlayerNum) {
    return 0.0f;
}

int32 UPalBossBattleManager::GetBossDefeatTechPoints(EPalBossType BossType) const {
    return 0;
}

UPalBossBattleSequencer* UPalBossBattleManager::GetBossBattleSequencerByActor(const AActor* Actor) const {
    return NULL;
}

int32 UPalBossBattleManager::GetBossBattleRecommendLevelPlus() {
    return 0;
}

FString UPalBossBattleManager::GetBossAchievementIndex(EPalBossType BossType) const {
    return TEXT("");
}

void UPalBossBattleManager::EmptyInstanceCleanup() {
}


bool UPalBossBattleManager::CanStartBossBattle(EPalBossType BossType) {
    return false;
}

bool UPalBossBattleManager::CanEntryHard(EPalBossType BossType, const APalPlayerCharacter* Player) const {
    return false;
}

void UPalBossBattleManager::BossBattleExit(EPalBossType BossType, APalPlayerCharacter* ExitPlayer) {
}

void UPalBossBattleManager::BossBattleEntryCancel(EPalBossType BossType, APalPlayerCharacter* EntryPlayer) {
}

void UPalBossBattleManager::BossBattleEntry(EPalBossType BossType, EPalBossBattleDifficulty Difficulty, APalPlayerCharacter* EntryPlayer) {
}

void UPalBossBattleManager::AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle) {
}


