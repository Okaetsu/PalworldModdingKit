#include "PalMapObjectLampModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectLampModel::UPalMapObjectLampModel() {
    this->bIsManuallyTurnedOff = false;
}

void UPalMapObjectLampModel::SetupDefaultLightColor_ServerInternal(const FLinearColor& DefaultColor) {
}

void UPalMapObjectLampModel::RequestToggleLamp_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectLampModel::RequestSubmitLightColor_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectLampModel::RequestResetLightColor_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectLampModel::OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule) {
}

void UPalMapObjectLampModel::OnSubmitLightColor(const FLinearColor& Color) {
}

void UPalMapObjectLampModel::OnResetLightColor() {
}

void UPalMapObjectLampModel::OnColorModuleChanged(const FName& Key, const FLinearColor& Color) {
}

void UPalMapObjectLampModel::IgnitionLight_ServerInternal() {
}

FLinearColor UPalMapObjectLampModel::GetLightColor() const {
    return FLinearColor{};
}

void UPalMapObjectLampModel::ExtinctionLight_ServerInternal() {
}

void UPalMapObjectLampModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectLampModel, bIsManuallyTurnedOff);
    DOREPLIFETIME(UPalMapObjectLampModel, DefaultLightColor);
}


