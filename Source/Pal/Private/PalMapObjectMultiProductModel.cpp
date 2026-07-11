#include "PalMapObjectMultiProductModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectMultiProductModel::UPalMapObjectMultiProductModel() {
    this->bIsWorkable = false;
    this->WorkSpeedAdditionalRate = 1.00f;
    this->MenuUIClass = NULL;
}

void UPalMapObjectMultiProductModel::RequestClearProductMode_FromClient(const int32 PlayerId) {
}

void UPalMapObjectMultiProductModel::RequestClearProductMode() {
}

void UPalMapObjectMultiProductModel::RequestChangeProductMode_FromClient(const int32 PlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectMultiProductModel::RequestChangeProductMode(FName NewProductId) {
}

void UPalMapObjectMultiProductModel::ReceivePickupItemResult_Client(const FPalNetArchive& Archive) {
}

void UPalMapObjectMultiProductModel::PickupItem_ServerInternal(const int32 PlayerId) {
}

void UPalMapObjectMultiProductModel::OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule) {
}

void UPalMapObjectMultiProductModel::OnUpdateContainerContent(UPalItemContainer* Container) {
}

void UPalMapObjectMultiProductModel::OnRep_CurrentProductId() {
}

void UPalMapObjectMultiProductModel::OnFinishWorkInServer(UPalWorkBase* Work) {
}

UPalItemContainer* UPalMapObjectMultiProductModel::GetItemContainer() const {
    return NULL;
}

FName UPalMapObjectMultiProductModel::GetCurrentProductId() const {
    return NAME_None;
}

TArray<FPalMultiProductModeData> UPalMapObjectMultiProductModel::GetAvailableModes() const {
    return TArray<FPalMultiProductModeData>();
}

float UPalMapObjectMultiProductModel::CalcRequiredAmount(const float BaseRequiredAmount) const {
    return 0.0f;
}

void UPalMapObjectMultiProductModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectMultiProductModel, CurrentProductId);
    DOREPLIFETIME(UPalMapObjectMultiProductModel, bIsWorkable);
}


