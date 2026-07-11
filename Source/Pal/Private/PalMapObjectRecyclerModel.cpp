#include "PalMapObjectRecyclerModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectRecyclerModel::UPalMapObjectRecyclerModel() {
    this->RecycleBoostBuffRemainingTime = 0.00f;
    this->RecycleBoostSpeedMultiplier = 1.00f;
    this->bInProgressRecycleBoost = false;
    this->bCanWork = false;
    this->BoostItemContainer = NULL;
    this->RelicItemContainer = NULL;
}

void UPalMapObjectRecyclerModel::SetSwitchState_ServerInternal(const int32 RequestPlayerId, bool bOn) {
}

void UPalMapObjectRecyclerModel::RequestSortRecyclerContainer_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectRecyclerModel::OnUpdateRelicContainerContent_ServerInternal(UPalItemContainer* Container) {
}

void UPalMapObjectRecyclerModel::OnUpdateOutputContainerContent_ServerInternal(UPalItemContainer* Container) {
}

void UPalMapObjectRecyclerModel::OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule) {
}

void UPalMapObjectRecyclerModel::OnUpdateBoostContainerContent_ServerInternal(UPalItemContainer* Container) {
}

void UPalMapObjectRecyclerModel::OnStartWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId) {
}

void UPalMapObjectRecyclerModel::OnRep_RelicItemContainer() {
}

void UPalMapObjectRecyclerModel::OnRep_RecycleBoostSpeedMultiplier() {
}

void UPalMapObjectRecyclerModel::OnRep_RecycleBoostBuffRemainingTime() {
}

void UPalMapObjectRecyclerModel::OnRep_CurrentRelicItemId() {
}

void UPalMapObjectRecyclerModel::OnRep_BoostItemContainer() {
}

void UPalMapObjectRecyclerModel::OnRep_bInProgressRecycleBoost() {
}

void UPalMapObjectRecyclerModel::OnFinishWorkInServer(UPalWorkBase* Work) {
}

void UPalMapObjectRecyclerModel::OnEndWorkAnyone_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& WorkerIndividualId) {
}

bool UPalMapObjectRecyclerModel::IsSwitchOn() const {
    return false;
}

bool UPalMapObjectRecyclerModel::IsRecycleBoostBuffActive() const {
    return false;
}

UPalItemContainer* UPalMapObjectRecyclerModel::GetRelicItemContainer() const {
    return NULL;
}

float UPalMapObjectRecyclerModel::GetRecycleBoostBuffRemainingTimeRate() const {
    return 0.0f;
}

float UPalMapObjectRecyclerModel::GetRecycleBoostBuffRemainingTime() const {
    return 0.0f;
}

UPalItemContainer* UPalMapObjectRecyclerModel::GetOutputContainer() const {
    return NULL;
}

float UPalMapObjectRecyclerModel::GetCurrentSpeedMultiplier() const {
    return 0.0f;
}

FName UPalMapObjectRecyclerModel::GetCurrentRelicItemId() const {
    return NAME_None;
}

UPalItemContainer* UPalMapObjectRecyclerModel::GetBoostItemContainer() const {
    return NULL;
}

bool UPalMapObjectRecyclerModel::CanWork() const {
    return false;
}

void UPalMapObjectRecyclerModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectRecyclerModel, CurrentRecycleItemId);
    DOREPLIFETIME(UPalMapObjectRecyclerModel, RecycleBoostBuffRemainingTime);
    DOREPLIFETIME(UPalMapObjectRecyclerModel, RecycleBoostSpeedMultiplier);
    DOREPLIFETIME(UPalMapObjectRecyclerModel, bInProgressRecycleBoost);
    DOREPLIFETIME(UPalMapObjectRecyclerModel, bCanWork);
    DOREPLIFETIME(UPalMapObjectRecyclerModel, BoostItemContainer);
    DOREPLIFETIME(UPalMapObjectRecyclerModel, RelicItemContainer);
}


