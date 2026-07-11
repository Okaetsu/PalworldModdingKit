#include "PalNetworkBossBattleComponent.h"

UPalNetworkBossBattleComponent::UPalNetworkBossBattleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalNetworkBossBattleComponent::UnlockAchievement_ToClient_Implementation(EPalBossType BossType) {
}

void UPalNetworkBossBattleComponent::RequestBossBattleStart_ToServer_Implementation(EPalBossType BossType) {
}

void UPalNetworkBossBattleComponent::RequestBossBattleStart_ToClient_Implementation(bool IsSuccess, EPalBossType BossType, const FPalStageInstanceId StageInstanceId, const TArray<APalPlayerCharacter*>& JoinPlayers, bool bShouldSpawnPalBoxForSequence) {
}

void UPalNetworkBossBattleComponent::RequestBossBattleInstanceRoot_ToServer_Implementation(EPalBossType BossType) {
}

void UPalNetworkBossBattleComponent::RequestBossBattleEntry_ToServer_Implementation(EPalBossType BossType, EPalBossBattleDifficulty Difficulty) {
}

void UPalNetworkBossBattleComponent::RemovePlayerFromRoom_ToClient_Implementation(EPalBossType BossType, APalPlayerCharacter* DeadPlayer) {
}

void UPalNetworkBossBattleComponent::NotifyWaterGimmickMove_ToClient_Implementation(EPalBossType BossType, FPalTwoPointMoveData MoveData) {
}

void UPalNetworkBossBattleComponent::NotifyFailedStartArenaByOverConcurrentStageLimitationToClient_Implementation() {
}

void UPalNetworkBossBattleComponent::NotifyBossBattleInstanceRoot_ToClient_Implementation(EPalBossType BossType, APalBossBattleInstanceRoot* BossBattleInstanceRoot) {
}

void UPalNetworkBossBattleComponent::NoticeSequenceEnd_ToServer_Implementation(EPalBossType BossType) {
}

void UPalNetworkBossBattleComponent::CombatResult_ToClient_Implementation(EPalBossType BossType, EPalBossBattleCombatResult CombatResult) {
}

void UPalNetworkBossBattleComponent::ChangeSequence_ToClient_Implementation(EPalBossType BossType, EPalBossBattleSequenceType NextSequence) {
}

void UPalNetworkBossBattleComponent::ChallengeBossFromPalBox_ToServer_Implementation(EPalBossType BossType) {
}


