#include "PalBossBattleInstanceModel.h"
#include "Net/UnrealNetwork.h"

UPalBossBattleInstanceModel::UPalBossBattleInstanceModel() {
    this->BossType = EPalBossType::None;
    this->bUseDefaultBattleBGM = false;
    this->Level = 1;
    this->CombatTimeMax = 0;
    this->bSpawnBossAtStart_InServer = true;
    this->BossBattleInstanceRoot = NULL;
    this->BossTower = NULL;
    this->BossBattleState = EPalBossBattleState::Open;
    this->MaxJoinablePlayerNum = 4;
    this->CombatTimeLimit = 0.00f;
    this->LocalBattleSequencer = NULL;
    this->Difficulty = EPalBossBattleDifficulty::Normal;
    this->ReservedDataLayerAsset = NULL;
    this->bSpawnPalBox = false;
    this->ReadyPhaseTimeLimit = 180;
    this->CapturePhaseTimeLimit = 60;
}

bool UPalBossBattleInstanceModel::ShouldSpawnPalBox() const {
    return false;
}

void UPalBossBattleInstanceModel::OnUpdateCombatTimeMax() {
}

void UPalBossBattleInstanceModel::OnUpdateCombatTimeLimit() {
}

void UPalBossBattleInstanceModel::OnUpdateBossBattleState() {
}

void UPalBossBattleInstanceModel::OnRep_ReadyPhaseTimeLimitDate() {
}

void UPalBossBattleInstanceModel::OnRep_MaxJoinablePlayerNum() {
}

void UPalBossBattleInstanceModel::OnRep_EntryPlayers() {
}

void UPalBossBattleInstanceModel::OnRep_CombatTimeMax() {
}

void UPalBossBattleInstanceModel::OnRep_CombatTimeLimit() {
}

void UPalBossBattleInstanceModel::OnRep_BossBattleState() {
}

void UPalBossBattleInstanceModel::OnRep_BossBattleInstanceRoot() {
}

bool UPalBossBattleInstanceModel::IsUseDefaultBattleBGM() const {
    return false;
}

bool UPalBossBattleInstanceModel::IsLevelInstanceLoaded() const {
    return false;
}

void UPalBossBattleInstanceModel::GiftSuccessItem_OnePlayer(APalPlayerCharacter* Player) {
}

FDateTime UPalBossBattleInstanceModel::GetReadyPhaseTimeLimitDate() const {
    return FDateTime{};
}

int32 UPalBossBattleInstanceModel::GetReadyPhaseRemainingSeconds() const {
    return 0;
}

int32 UPalBossBattleInstanceModel::GetLevel() const {
    return 0;
}

float UPalBossBattleInstanceModel::GetCombatTimeMax() const {
    return 0.0f;
}

EPalBossType UPalBossBattleInstanceModel::GetBossType() const {
    return EPalBossType::None;
}

FName UPalBossBattleInstanceModel::GetBossPalId() const {
    return NAME_None;
}

EPalBossBattleState UPalBossBattleInstanceModel::GetBossBattleState() const {
    return EPalBossBattleState::Open;
}

APalMapObject* UPalBossBattleInstanceModel::GetBossBattlePalBoxActor() const {
    return NULL;
}

void UPalBossBattleInstanceModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBossBattleInstanceModel, RepFrontWarpPointtLocation);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossType);
    DOREPLIFETIME(UPalBossBattleInstanceModel, IntroCutsceneActor);
    DOREPLIFETIME(UPalBossBattleInstanceModel, EndingCutsceneActor);
    DOREPLIFETIME(UPalBossBattleInstanceModel, IntroBGMAudioEvent);
    DOREPLIFETIME(UPalBossBattleInstanceModel, LoopBGMAudioEvent);
    DOREPLIFETIME(UPalBossBattleInstanceModel, bUseDefaultBattleBGM);
    DOREPLIFETIME(UPalBossBattleInstanceModel, Level);
    DOREPLIFETIME(UPalBossBattleInstanceModel, CombatTimeMax);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossBattleInstanceRoot);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossTower);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossBattleState);
    DOREPLIFETIME(UPalBossBattleInstanceModel, EntryPlayers);
    DOREPLIFETIME(UPalBossBattleInstanceModel, MaxJoinablePlayerNum);
    DOREPLIFETIME(UPalBossBattleInstanceModel, CombatTimeLimit);
    DOREPLIFETIME(UPalBossBattleInstanceModel, Difficulty);
    DOREPLIFETIME(UPalBossBattleInstanceModel, OneTimeRewards);
    DOREPLIFETIME(UPalBossBattleInstanceModel, bSpawnPalBox);
    DOREPLIFETIME(UPalBossBattleInstanceModel, ReadyPhaseTimeLimitDate);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossBattlePalBoxInstanceId);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossBattleBaseCampId);
    DOREPLIFETIME(UPalBossBattleInstanceModel, BossPalId);
}


