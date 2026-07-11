#include "PalBossTower.h"
#include "Net/UnrealNetwork.h"

APalBossTower::APalBossTower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->BossType = EPalBossType::None;
    this->bIsStandaloneBossTower = false;
    this->InstanceModel = NULL;
    this->CombatTimeLimit = 0.00f;
    this->CombatTimeMax = 0;
    this->bShouldUpdateBattleInfoTowerBossCountdown = true;
}

bool APalBossTower::WriteBossDefeatRecord_ServerInternal(APalPlayerCharacter* TargetPlayer) {
    return false;
}

void APalBossTower::UpdateEntry_Multicast_Implementation(EPalBossBattleDifficulty NewDifficulty, const TArray<APalPlayerCharacter*>& NewEntryPlayers, EPalBossBattleState InBossBattleState) {
}

void APalBossTower::ShowWaitInfo(const FVector TargetLocation, const FVector DisplayOffset, bool isWaiting) {
}

bool APalBossTower::ShouldInfoMaskByBossType() const {
    return false;
}

void APalBossTower::RequestBossBattleStart() {
}

void APalBossTower::RequestBossBattleEntry(EPalBossBattleDifficulty Difficulty) {
}

void APalBossTower::OnUpdateLocalBossDefeatFlag(FName Key, bool bNewValue) {
}

void APalBossTower::OnRep_InstanceModel() {
}

void APalBossTower::OnCompleteSyncLocalPlayer(APalPlayerState* PlayerState) {
}


void APalBossTower::OnChangeEntryPlayer(TArray<APalPlayerCharacter*> EntryPlayers) {
}

void APalBossTower::OnChangeCombatTimeMax(int32 NewCombatTimeMax) {
}

void APalBossTower::OnChangeCombatTimeLimit(float NewCombatTimeLimit) {
}


void APalBossTower::OnChangeBossBattleState(EPalBossBattleState NewBossBattleState) {
}

void APalBossTower::NotifyEntryUpdateAll() {
}

bool APalBossTower::IsLocalBossDefeated() const {
    return false;
}

bool APalBossTower::IsEntered(APalPlayerCharacter* Player) const {
    return false;
}

FTransform APalBossTower::GetTopWarpPoint_Implementation() const {
    return FTransform{};
}

FTransform APalBossTower::GetFrontWarpPoint_Implementation() const {
    return FTransform{};
}

FTransform APalBossTower::GetDeadItemDropPoint_Implementation() const {
    return FTransform{};
}

FName APalBossTower::GetBossBattleRowName() {
    return NAME_None;
}

void APalBossTower::CloseWaitInfo() {
}

void APalBossTower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalBossTower, InstanceModel);
    DOREPLIFETIME(APalBossTower, CombatTimeLimit);
    DOREPLIFETIME(APalBossTower, CombatTimeMax);
    DOREPLIFETIME(APalBossTower, bShouldUpdateBattleInfoTowerBossCountdown);
}


