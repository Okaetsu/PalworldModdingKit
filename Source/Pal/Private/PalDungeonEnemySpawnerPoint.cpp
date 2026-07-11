#include "PalDungeonEnemySpawnerPoint.h"

APalDungeonEnemySpawnerPoint::APalDungeonEnemySpawnerPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RankType = EPalDungeonEnemySpawnerRankType::Normal;
    this->OverwriteRayUpOffset = 0.00f;
}

void APalDungeonEnemySpawnerPoint::OnEnterCharacterToGroup(UPalIndividualCharacterHandle* IndividualHandle) {
}

void APalDungeonEnemySpawnerPoint::OnCreatedGroup() {
}

void APalDungeonEnemySpawnerPoint::OnChangeBossState_ServerInternal(UPalDungeonInstanceModel* InstanceModel) {
}

void APalDungeonEnemySpawnerPoint::CheckLevelStreamingCompleted() {
}


