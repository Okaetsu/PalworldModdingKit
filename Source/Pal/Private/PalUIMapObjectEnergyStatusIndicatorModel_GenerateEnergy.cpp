#include "PalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy.h"

UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy::UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy() {
}

void UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy::OnUpdateStoredEnergyAmount(UPalMapObjectGenerateEnergyModel* GenerateEnergyModel) {
}

void UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy::OnReadyOperationalLoadModule(UPalMapObjectConcreteModelBase* Model, UPalMapObjectConcreteModelModuleBase* InModule) {
}

bool UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy::IsOverHeatWarning() const {
    return false;
}

bool UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy::IsOverHeated() const {
    return false;
}

void UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy::HandleOverloadStateChanged() {
}

void UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy::HandleCurrentLoadChanged(float LoadRatio) {
}

float UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy::GetOverHeatRatio() const {
    return 0.0f;
}


