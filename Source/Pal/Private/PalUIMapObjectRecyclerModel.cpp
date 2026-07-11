#include "PalUIMapObjectRecyclerModel.h"

UPalUIMapObjectRecyclerModel::UPalUIMapObjectRecyclerModel() {
}

bool UPalUIMapObjectRecyclerModel::TryGetConcreteModel(UPalMapObjectRecyclerModel*& Model) {
    return false;
}

void UPalUIMapObjectRecyclerModel::RequestSortRecyclerContainer() {
}

void UPalUIMapObjectRecyclerModel::RequestSetPowerOn(bool bShouldBeOn) {
}

void UPalUIMapObjectRecyclerModel::OnUpdateSwitch(UPalMapObjectSwitchModule* SwitchModule) {
}

void UPalUIMapObjectRecyclerModel::OnUpdateItemContainerContents(UPalMapObjectItemContainerModule* Module) {
}

void UPalUIMapObjectRecyclerModel::OnUpdateCurrentRecycleItem(UPalMapObjectRecyclerModel* Model) {
}

void UPalUIMapObjectRecyclerModel::OnUpdateBoost(UPalMapObjectRecyclerModel* Model) {
}

void UPalUIMapObjectRecyclerModel::OnReadySwitchModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module) {
}

void UPalUIMapObjectRecyclerModel::OnReadyItemContainerModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* Module) {
}

bool UPalUIMapObjectRecyclerModel::IsSwitchOn() const {
    return false;
}

bool UPalUIMapObjectRecyclerModel::IsRecycleBoostBuffActive() const {
    return false;
}

bool UPalUIMapObjectRecyclerModel::IsFullOutputContainer() const {
    return false;
}

void UPalUIMapObjectRecyclerModel::Initialize(UPalMapObjectRecyclerModel* InModel) {
}

UPalItemContainer* UPalUIMapObjectRecyclerModel::GetRelicItemContainer() const {
    return NULL;
}

float UPalUIMapObjectRecyclerModel::GetRecycleBoostBuffRemainingTimeRate() const {
    return 0.0f;
}

UPalItemContainer* UPalUIMapObjectRecyclerModel::GetOutputContainer() const {
    return NULL;
}

float UPalUIMapObjectRecyclerModel::GetCurrentSpeedMultiplier() const {
    return 0.0f;
}

FName UPalUIMapObjectRecyclerModel::GetCurrentRecycleItemId() const {
    return NAME_None;
}

FText UPalUIMapObjectRecyclerModel::GetBuildObjectName() const {
    return FText::GetEmpty();
}

UPalItemContainer* UPalUIMapObjectRecyclerModel::GetBoostItemContainer() const {
    return NULL;
}

bool UPalUIMapObjectRecyclerModel::CanWork() const {
    return false;
}


