#include "PalUIMapObjectRaidBossAreaStatusModel.h"

UPalUIMapObjectRaidBossAreaStatusModel::UPalUIMapObjectRaidBossAreaStatusModel() {
}

void UPalUIMapObjectRaidBossAreaStatusModel::SetupOnReadyInstanceModel(UPalRaidBossAreaInstanceModel* InstanceModel) {
}

void UPalUIMapObjectRaidBossAreaStatusModel::SetupForBossBattle(UPalMapObjectBaseCampPoint* OwnerBaseCampPoint) {
}

void UPalUIMapObjectRaidBossAreaStatusModel::Setup(const FPalStageInstanceId& StageInstanceId) {
}

void UPalUIMapObjectRaidBossAreaStatusModel::OnReadyPhaseTimeLimitDateChanged(FDateTime NewReadyPhaseTimeLimitDate) {
}

void UPalUIMapObjectRaidBossAreaStatusModel::OnInstanceModelPhaseChanged(UPalRaidBossAreaInstanceModel* InstanceModel) {
}

void UPalUIMapObjectRaidBossAreaStatusModel::OnBossBattleStateChanged(EPalBossBattleState NewState) {
}

bool UPalUIMapObjectRaidBossAreaStatusModel::IsTowerBossBattleMode() const {
    return false;
}

bool UPalUIMapObjectRaidBossAreaStatusModel::IsRaidAreaActive() const {
    return false;
}

bool UPalUIMapObjectRaidBossAreaStatusModel::IsExistBoundInstanceModel() const {
    return false;
}

bool UPalUIMapObjectRaidBossAreaStatusModel::HasValidPhaseTime() const {
    return false;
}

FName UPalUIMapObjectRaidBossAreaStatusModel::GetTowerBossPalId() const {
    return NAME_None;
}

EPalBossType UPalUIMapObjectRaidBossAreaStatusModel::GetTowerBossBattleBossType() const {
    return EPalBossType::None;
}

FName UPalUIMapObjectRaidBossAreaStatusModel::GetRaidBossStaticItemId() const {
    return NAME_None;
}

float UPalUIMapObjectRaidBossAreaStatusModel::GetPhaseRemainingTime() const {
    return 0.0f;
}

EPalRaidBossAreaPhase UPalUIMapObjectRaidBossAreaStatusModel::GetCurrentPhase() const {
    return EPalRaidBossAreaPhase::None;
}

void UPalUIMapObjectRaidBossAreaStatusModel::Dispose() {
}

bool UPalUIMapObjectRaidBossAreaStatusModel::CanJoinRaidArea() const {
    return false;
}


