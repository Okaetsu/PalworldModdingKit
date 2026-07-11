#include "PalMapObjectGenerateEnergyModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectGenerateEnergyModel::UPalMapObjectGenerateEnergyModel() {
    this->bOverHeatCoolingInProgress = false;
    this->bHasOperationalLoadModule = false;
    this->EnergyType = EPalEnergyType::None;
    this->GenerateEnergyRateByWorker = 1.00f;
    this->MaxEnergyStorage = 0.00f;
    this->StoredEnergyAmount = 0.00f;
    this->ConsumeEnergySpeed = 0.00f;
    this->ObtainExpByGenerateEnergy = 0.00f;
}

void UPalMapObjectGenerateEnergyModel::OnUpdateAssignedCharacter_ServerInternal(UPalWorkBase* Work) {
}

void UPalMapObjectGenerateEnergyModel::OnTickCharacterWorkWait_ServerInternal(UPalWorkOnlyJoin* Work) {
}

void UPalMapObjectGenerateEnergyModel::OnStartOverHeatCoolingWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalMapObjectGenerateEnergyModel::OnRep_StoredEnergyAmount() {
}

void UPalMapObjectGenerateEnergyModel::OnEndOverHeatCoolingWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalMapObjectGenerateEnergyModel::OnDisposeOverHeatCoolingWork_ServerInternal(UPalWorkBase* Work) {
}

void UPalMapObjectGenerateEnergyModel::HandleOverloadStarted() {
}

void UPalMapObjectGenerateEnergyModel::HandleOverloadEnded() {
}

void UPalMapObjectGenerateEnergyModel::HandleLoadReductionRequired(float LoadRatio) {
}

float UPalMapObjectGenerateEnergyModel::GetStoredEnergyAmount() const {
    return 0.0f;
}

float UPalMapObjectGenerateEnergyModel::GetMaxEnergyStorage() const {
    return 0.0f;
}

EPalEnergyType UPalMapObjectGenerateEnergyModel::GetEnergyType() const {
    return EPalEnergyType::None;
}

void UPalMapObjectGenerateEnergyModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, bHasOperationalLoadModule);
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, EnergyType);
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, GenerateEnergyRateByWorker);
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, MaxEnergyStorage);
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, StoredEnergyAmount);
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, ConsumeEnergySpeed);
}


