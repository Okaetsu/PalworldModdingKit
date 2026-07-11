#include "PalInvaderManager.h"

UPalInvaderManager::UPalInvaderManager() {
    this->NegotiatorRowName = TEXT("Negotiator");
    this->InvaderInfo = NULL;
    this->GiftSuccessItemRangeScale = 2.00f;
    this->InvaderCancelCostTable = NULL;
    this->InvaderEnemyDataTable = NULL;
    this->PathFinder = NULL;
}

void UPalInvaderManager::VisitorTravelTest() {
}

void UPalInvaderManager::VisitorTravelLog(EPalLogType logType) {
}

void UPalInvaderManager::StartInvaderMarchRandom() {
}

void UPalInvaderManager::StartInvaderMarchForBaseCamp(FGuid campID) {
}

void UPalInvaderManager::StartInvaderMarchAll() {
}

AActor* UPalInvaderManager::SpawnDummyNavInvoker(const FTransform& Transform) {
    return NULL;
}


bool UPalInvaderManager::RequestIncidentVisitorNPC(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer, bool IgnoreDeclaration) {
    return false;
}


bool UPalInvaderManager::RequestIncidentInvaderEnemy(const FGuid& Guid, UPalInvaderBaseCampObserver* Observer) {
    return false;
}

void UPalInvaderManager::RemoveInvaderIncident(UPalIncidentBase* Incident) {
}

void UPalInvaderManager::OnStartWave(APalInvaderInfo* InInvaderInfo, int32 NewWaveCount) {
}

void UPalInvaderManager::OnEndWave(APalInvaderInfo* InInvaderInfo, int32 EndWaveCount) {
}

void UPalInvaderManager::NotifyCurrentWaveIfRunning() {
}

APalInvaderInfo* UPalInvaderManager::GetInvaderInfo() const {
    return NULL;
}

void UPalInvaderManager::BroadcastInvaderWaveTimeup_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalInvaderManager::BroadcastInvaderStart_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalInvaderManager::BroadcastInvaderEnd_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}

void UPalInvaderManager::BroadcastInvaderDeclaration_Implementation(const FDateTime& StartRealTime) {
}

void UPalInvaderManager::BroadcastInvaderCancel_Implementation() {
}

void UPalInvaderManager::BroadcastInvaderArrived_Implementation(const FPalIncidentBroadcastParameter& Parameter) {
}


