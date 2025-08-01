#include "PalDungeonGimmickUnlockableDoor_DefeatBoss.h"
#include "Net/UnrealNetwork.h"

APalDungeonGimmickUnlockableDoor_DefeatBoss::APalDungeonGimmickUnlockableDoor_DefeatBoss(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BossState = EPalDungeonInstanceBossState::Spawned;
}

void APalDungeonGimmickUnlockableDoor_DefeatBoss::OnRep_BossState() {
}


void APalDungeonGimmickUnlockableDoor_DefeatBoss::OnChangeBossState_ServerInternal(UPalDungeonInstanceModel* InstanceModel) {
}

void APalDungeonGimmickUnlockableDoor_DefeatBoss::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalDungeonGimmickUnlockableDoor_DefeatBoss, BossState);
}


